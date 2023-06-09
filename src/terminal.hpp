#ifndef _TERMINAL_HPP
#define _TERMINAL_HPP

#include <iostream>
#include <sstream>

#include "command.hpp"

Command parse_shell_command(std::string command);

std::string prompt(std::string query);

#endif