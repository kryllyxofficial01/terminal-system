#include <iostream>

#include "terminal.hpp"
#include "utils.hpp"

using namespace std;

int main() {
    string command;

    while (true) {
        command = prompt("> ");

        Command cmd = parse_shell_command(command);
        execute_shell_command(cmd);
    }
}