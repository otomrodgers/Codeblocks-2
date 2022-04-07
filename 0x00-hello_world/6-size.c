#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
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
	printf("Size of long: %ulu byte(s)\n", sizeof(c));
	printf("Size of long long: %ulu byte(s)\n", sizeof(d));
	printf("Size of float: %ulu byte(s)\n", sizeof(e));


	return (0);
}

