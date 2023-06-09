#ifndef _COMMAND_HPP
#define _COMMAND_HPP

#include <vector>
#include <string>

struct Args {
    std::vector<std::string> command_args;
    std::vector<std::pair<std::string, std::string>> flags;
};

struct Command {
    std::string command;
    Args arguments;
};

#endif