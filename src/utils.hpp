#ifndef _UTILS_HPP
#define _UTILS_HPP

#include <vector>
#include <array>
#include <string>

const inline std::vector<std::string> commands = {
    "help", "mk", "ls", "cd", "mv", "cp", "rm",
    "pwd", "find", "print", "text", "clear", "exit"
};

struct Command {
    std::string name;
    std::vector<std::string> arguments;
    std::vector<std::pair<std::string, std::string>> flags;
};

#endif