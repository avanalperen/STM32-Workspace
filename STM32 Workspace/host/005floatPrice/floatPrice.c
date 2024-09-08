/*
 * floatPrice.c
 *
 *  Created on: Sep 8, 2024
 *      Author: Alperen
 */

#include <stdio.h>

int main(void)
{

	float number = 27.0193456;

	printf("Number = %f \n",number);

	// Output = 'Number = 27.0193456'
	// It normally gives 6 numbers after the decimal
	// To make decimal part 2 numbers long ; It can be changed by '.2f' method
	// But, when you do this it automatically rounds the numbers

	printf("Number = %0.2f \n",number);

	// Output = 'Number = 27.02'

	// If scientific notation is want, %e is using

	printf("Scientific Number = %e \n",number);

	// To have seen more precision instead using 4 byte float type , 8 byte double type can be using
	// The sign of double is lf and for scientific notation it is le

	double number2 = 27.01934567891234;
	double number3 = 27.01934567e-19;

	printf("Number2 = %0.14lf \n",number2);

	printf("Scientific Number2 = %le \n",number2);

	printf("Number3 = %0.28lf \n",number3);

	printf("Scientific Number3 = %le \n",number3);

}


