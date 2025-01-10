#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "../include/arguments.h"

int main(int argc, char *argv[]) {
    char ***srcs = NULL;

    readArgs(argc, argv, srcs);

    return EXIT_SUCCESS;
}
