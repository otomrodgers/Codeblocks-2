#include <stdio.h>

/**
 * main - print to standard output
 * Return: 0 if exited, compiled without error
 */

int main(void)
{
	char c;
	int i;
	long l;
	double d;
	float f;

	printf("Size of char: %ulu byte(s)\n", sizeof(c));
	printf("Size of int: %ulu byte(s)\n", sizeof(i));
	printf("Size of long: %ulu byte(s)\n", sizeof(l));
	printf("Size of long long: %ulu byte(s)\n", sizeof(d));
	printf("Size of float: %ulu byte(s)\n", sizeof(f));


	return (0);
}

