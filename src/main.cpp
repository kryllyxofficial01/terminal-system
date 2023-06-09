#include <iostream>

#include "terminal.hpp"

using namespace std;

int main() {
    string command;
    int code = 0;

    while (code == 0) {
        command = prompt("> ");

        Command cmd = parse_shell_command(command);
        code = execute_shell_command(cmd);
    }

    printf("\x1b[33mExited with code: %i\n\x1b[0m", code);
}