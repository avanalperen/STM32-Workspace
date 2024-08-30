#include <stdio.h>

int main(void)
{

	char a1 = 'A'; // ASCII codes for this letter or punctuation 65
	char a2 = 'p'; // ASCII codes for this letter or punctuation 112
	char a3 = 'p'; // ASCII codes for this letter or punctuation 112
	char a4 = 'l'; // ASCII codes for this letter or punctuation 108
	char a5 = 'e'; // ASCII codes for this letter or punctuation 101
	char a6 = ':'; // ASCII codes for this letter or punctuation 58
	char a7 = ')'; // ASCII codes for this letter or punctuation 41

	// If we try to print these chars with %d(integer) it will print ASCII codes to terminal

	printf("The string is : %d\n",a1);

	// The output is : 'The string is : 65'

	printf("The string is : %c\n", a1);

	// The output is : 'The string is : A'

	return 0;

}