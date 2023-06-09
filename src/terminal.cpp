#include "terminal.hpp"

Command parse_shell_command(std::string command) {
    Command cmd;

    if (command.find_first_of(' ') != std::string::npos) {
        std::string arg;
        std::vector<std::string> args;

        std::stringstream stream(
            command.substr(command.find_first_of(' ')+1)
        );

        while(std::getline(stream, arg, ' ')) {
            args.push_back(arg);
        }

        Args command_args;
        for (int i = 0; i < args.size(); i++) {
            if (args.at(i).substr(0, 2) == "--") {
                command_args.flags.push_back(
                    std::make_pair(
                        args.at(i).substr(2),
                        args.at(i+1)
                    )
                );

                i++;
            }
            else if (args.at(i)[0] == '-') {
                command_args.flags.push_back(
                    std::make_pair(
                        args.at(i).substr(1),
                        ""
                    )
                );
            }
            else {
                command_args.command_args.push_back(args.at(i));
            }
        }

        cmd.arguments = command_args;
    }

    cmd.command = command.substr(
        0, command.find_first_of(' ')
    );

    return cmd;
}

int execute_shell_command(Command command) {
    size_t index = std::find(
        commands.begin(),
        commands.end(),
        command.command
    ) - commands.begin();

    switch (index) {
        // help
        case 0: {
            printf("\n<> means required, [] means optional\n\n");

            if (command.arguments.command_args.size() < 1) {
                print_help_message();
            }
            else {
                print_help_message(command.command);
            }

            return 0;
        }
        case 12: {
            return 1;
        }
        default: {
            printf("\x1b[31mUnknown command: '%s'\x1b[0m\n", command.command.c_str());
            return -1;
        }
    }
}

std::string prompt(std::string query) {
    std::string response;

    std::cout << query;
    std::getline(std::cin, response);

    return response;
}