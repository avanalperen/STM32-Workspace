/*
 * function.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Alperen
 */
#include <stdio.h>

int function_add_numbers(int a,int b,int c);

int main(void)
{

	int x = 1;
	int y = 2;
	int z = 3;

	int sum = function_add_numbers(x,y,z);

	printf("The return is : %d",sum);

	return 0;
}

// This is function definition
int function_add_numbers(int a,int b,int c)
{
	int summarization = a+b+c;

	return summarization;
}
