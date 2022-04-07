#include <stdio.h>

/**
 * This program prints sizes of 
 * different datat types
 * in C program
 */

int main(void)

{
	char a;
	int b;
	long c;
        double d;
	float e;


	printf("Size of char: %ulu byte(s)\n, sizeof(a));
	printf("Size of int: %ulu byte(s)\n, sizeof(b));
	printf("Size of long: %ulu byte(s)\n, sizeof(a));
	printf("Size of long long: %ulu byte(s)\n, sizeof(d));
	printf("Size of float: %ulu byte(s)\n, sizeof(e));

	return (0);
}

