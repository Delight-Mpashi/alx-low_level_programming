#include <stdio.h>
/**
 *
 * main-Entry point
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	char l;
	float n;

	printf ("Char size: %lu bytes(s)\n",(unsigned long)sizeof(l)); 
	printf("int size: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("long int size: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("long long int size: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("float size: %lu byte(s)\n", (unsigned long)sizeof(n));
	return(0);
}
