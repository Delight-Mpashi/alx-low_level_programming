#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	char l;
	float n;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(l)); 
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("long long int size: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	return(0);
}
