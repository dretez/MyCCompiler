#include "../include/arguments.h"

int readArgs(int argc, char **argv, char ***outsrc) {
    if (argc == 1) {
        printf("Expected arguments: %s <filepaths>\n", argv[0]);
        return 1;
    }

    /* Currently there are no special arguments, all arguments are to be treated
     * as filepaths */
    *outsrc = realloc(*outsrc, argc * sizeof(char *));
    for (int i = 0; i < argc; i++) {
        *outsrc[i] = argv[i];
    }

    return 0;
}
