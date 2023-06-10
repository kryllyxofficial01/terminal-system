#ifndef _TERMINAL_HPP
#define _TERMINAL_HPP

#include <iostream>
#include <sstream>
#include <algorithm>
#include <filesystem>

#include "utils.hpp"

/**
 * @brief Take in a shell command and grab the command name, arguments, and flags.
 * @param command The shell command inputted by the user.
 * @return The parsed command
*/
Command parse_shell_command(std::string command);

/**
 * @brief Execute a shell command.
 * @param command The details of a command.
*/
void execute_shell_command(Command command);

/**
 * @brief Prompt the user a question.
 * @param query The question to ask the user.
 * @return The user's response
*/
std::string prompt(std::string query);

#endif