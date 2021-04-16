#include "pascal.h"

int get_int(int min, int max) {
    int t;
    do {
        printf("Enter a number between (%d,%d)", min, max);
        int r = scanf("%d", &t);
        if (r != 1) {
            t = 0;
            char temp;
            while ((temp = getchar()) != EOF && temp != '\n');
        }
    } while (t<min || t>max);
    return t;
}
