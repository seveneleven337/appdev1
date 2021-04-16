//this program will take two positive integers from the user, and display
//all the numbers divisible by 3 between these two integers
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


int main(void) {
	int32_t a, b;
	printf("Enter two positive integers separeted by coma: ");
	scanf("%d,%d", &a, &b);
	if (a > b) {
		int32_t temp = a;
		a = b;
		b = temp;
	}
	for (int8_t i = 0, c = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 10 == 0) printf("\n");
		}
	}return 0;
}