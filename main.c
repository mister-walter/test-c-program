#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    if(argc <= 1) {
        printf("Must provide at least 1 argument. Exiting.");
        return -1;
    }
    errno = 0;
    long v = strtol(argv[1], NULL, 10);
    if(errno == ERANGE) {
        printf("First argument was too large. Exiting.");
        return -1;
    }
    long inc_v = v + 1;
    printf("Incremented value: %ld", inc_v);
    return 0;
}
