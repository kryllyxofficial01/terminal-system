#ifndef _COMMAND_HPP
#define _COMMAND_HPP

#include <vector>
#include <array>
#include <string>

const inline std::vector<std::string> commands = {
    "help", "mk", "ls", "cd", "mv", "cp", "rm",
    "pwd", "find", "print", "text", "clear", "exit"
};

struct Args {
    std::vector<std::string> command_args;
    std::vector<std::pair<std::string, std::string>> flags;
};

struct Command {
    std::string command;
    Args arguments;
};

void print_help_message();
void print_help_message(std::string command);

#endif