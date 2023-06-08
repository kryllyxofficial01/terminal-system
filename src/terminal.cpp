#include "terminal.hpp"

struct Command parse_shell_command(std::string command) {
    struct Command cmd;

    size_t args_start_index = command.find_first_of(" ")+1;

    std::string arg;
    std::vector<std::string> args;

    std::stringstream stream(
        command.substr(args_start_index)
    );

    while(std::getline(stream, arg, ' ')) {
        args.push_back(arg);
    }

    struct Args command_args;
    for (int i = 0; i < args.size(); i++) {
        if (args.at(i)[0] == '-') {
            command_args.flags.push_back(
                std::make_pair(
                    args.at(i).substr(1),
                    args.at(i+1)
                )
            );

            i++;
        }
        else {
            command_args.command_args.push_back(args.at(i));
        }
    }

    cmd.command = command.substr(
        0, args_start_index-1
    );
    cmd.args = command_args;

    return cmd;
}

std::string prompt(std::string query) {
    std::string response;

    std::cout << query;
    std::getline(std::cin, response);

    return response;
}