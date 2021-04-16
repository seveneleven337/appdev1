#include "pascal.h"

long long int factorial(int b) {
    long long int res = 1;
    for (b; b >= 1; b--) {
        res *= b;
    }return res;
}

void pascal_triangle(int a) {
    long int c[50][50];
    int i, j, l;// , temp, temp1, temp2;
    for (i = 0; i <= (a - 1); i++) {
        for (l = (a - i); l > 0; l--) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            //temp = factorial(i);
            //temp1 = factorial(j);
            //temp2 = i - j;
            //temp2 = factorial(temp2);
            //c[i][j] = temp / (temp1 * temp2);
            c[i][j] = (factorial(i)) / (factorial(j) * factorial(i - j));
            printf("%4ld  ", c[i][j]);


        }printf("\n");
    }
}
