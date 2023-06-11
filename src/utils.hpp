#ifndef _UTILS_HPP
#define _UTILS_HPP

#include <vector>
#include <string>

struct Command {
    std::string name;
    std::vector<std::string> arguments;
    std::vector<std::pair<std::string, std::string>> flags;
};

#endif