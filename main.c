#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress() { printf("Compression function called\n"); }
void decompress() { printf("Decompression function called\n"); }

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s [compress|decompress]\n", argv[0]);
        exit(-1);
    }

    if (!strcmp(argv[1], "compress")) {
        compress();
    }

    else if (!strcmp(argv[1], "decompress")) {
        decompress();
    }

    else {
        printf("Usage: %s [compress|decompress]\n", argv[0]);
        exit(-1);
    }

    return 0;
}
