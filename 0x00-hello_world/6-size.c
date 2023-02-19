#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by xomee
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

<<<<<<< HEAD
	printf("size of a char: %zu byte(s)\n", sizeof(a));
	printf("size of an int: %zu byte(s)\n", sizeof(b));
	printf("size of a long int: %zu byte(s)\n", sizeof(c));
	printf("size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
=======
	printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
>>>>>>> 9e5befc0285b68543ac6fea32b76a77f7eec23d9
	return (0);
}
