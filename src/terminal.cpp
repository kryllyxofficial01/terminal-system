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

        for (int i = 0; i < args.size(); i++) {
            if (args.at(i).substr(0, 2) == "--") {
                cmd.flags.push_back(
                    std::make_pair(
                        args.at(i).substr(2),
                        args.at(i+1)
                    )
                );

                i++;
            }
            else if (args.at(i)[0] == '-') {
                cmd.flags.push_back(
                    std::make_pair(
                        args.at(i).substr(1),
                        ""
                    )
                );
            }
            else {
                cmd.arguments.push_back(args.at(i));
            }
        }
    }

    cmd.name = command.substr(
        0, command.find_first_of(' ')
    );

    return cmd;
}

void execute_shell_command(Command command) {
    std::string command_path = "./src/bin/" + command.name;

    if (std::filesystem::exists(command_path)) {
        system(command_path.c_str());
    }
    else {
        printf("\x1b[31mUnknown command: '%s'\x1b[0m\n\n", command.name.c_str());
    }
}

std::string prompt(std::string query) {
    std::string response;

    std::cout << query;
    std::getline(std::cin, response);

    return response;
}