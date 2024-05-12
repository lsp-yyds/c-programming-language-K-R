//
// Created by bruce on 24-5-12.
//

# include <stdio.h>

/* count characters in input */

int main() {
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    return 0;
}