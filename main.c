#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress() {
    printf("Compressing... \n");

    int seen_char = getchar();
    int next_char;
    int counter = 1;

    while ((next_char = getchar()) != EOF) {
        if (next_char == seen_char) {
            counter++;

            if (counter >= 255) {
                putchar(seen_char);
                putchar(counter);
                counter = 0;
            }
        } else {
            putchar(seen_char);
            putchar(counter);
            counter = 1;
            seen_char = next_char;
        }
    }

    putchar(seen_char);
    putchar(counter);
}
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
