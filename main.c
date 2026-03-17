#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress() {
    fprintf(stderr, "Compressing...\n");

    int seen_char = getchar();
    if (seen_char == EOF)
        return;

    int next_char;
    int counter = 1;

    while ((next_char = getchar()) != EOF) {
        if (next_char == seen_char) {
            counter++;

            if (counter >= 255) {
                putchar(seen_char);
                putchar(counter);
                counter = 1;
            }
        } else {
            putchar(seen_char);
            putchar(counter);
            seen_char = next_char;
            counter = 1;
        }
    }

    putchar(seen_char);
    putchar(counter);
}

void decompress() {
    fprintf(stderr, "Decompressing...\n");

    int enc_char, count;

    while ((enc_char = getchar()) != EOF) {
        count = getchar();
        if (count == EOF)
            break;

        for (int i = 0; i < count; ++i) {
            putchar(enc_char);
        }
    }
}

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
