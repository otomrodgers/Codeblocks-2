#include <stdio.h>

/**
 *init: project initialization
 *Main: main function
 *Description: This program prints sizes of
 *Different datat types
 */

int main(void)
{
	char a;
	int b;
	long c;
	double d;
	float e;

	printf("Size of char: %ulu byte(s)\n", sizeof(a));
	printf("Size of int: %ulu byte(s)\n", sizeof(b));
	printf("Size of long: %ulu byte(s)\n", sizeof(a));
	printf("Size of long long: %ulu byte(s)\n", sizeof(d));
	printf("Size of float: %ulu byte(s)\n", sizeof(e));
	return (0);
}

