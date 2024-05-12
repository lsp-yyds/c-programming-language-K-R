//
// Created by bruce on 24-5-12.
//

#include <stdio.h>

/* copy input to output */

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}