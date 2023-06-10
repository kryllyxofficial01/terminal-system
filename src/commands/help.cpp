#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        printf(
            "<> means required, [] means optional\n\n"

            "1. help [command]\n"
            "If no command is provided, then this message is displayed. Otherwise\n"
            "an in-depth explanation for the specified command is shown.\n\n"
        );
    }

    return 0;
}