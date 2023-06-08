#include <iostream>

#include "terminal.hpp"

using namespace std;

int main() {
    string command;

    while (command != "exit") {
        command = prompt("> ");

        parse_shell_command(command);
    }
}