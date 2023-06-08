#include "terminal.hpp"

struct Command parse_shell_command(std::string command) {
    struct Command cmd;

    std::cout << command << std::endl;

    return cmd;
}

std::string prompt(std::string query) {
    std::string response;

    std::cout << query;
    std::getline(std::cin, response);

    return response;
}