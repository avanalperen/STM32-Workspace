/*
 * main.c
 *
 *  Created on: Oct 17, 2024
 *      Author: Alperen
 */

#include <stdio.h>

int main(void)
{
	double charge,chargeE;

	double electrons;

	printf("Enter the charge : ");

	scanf("%lf",&charge);

	printf("Enter the charge of an electron : ");

	scanf("%le",&chargeE);

	electrons = (charge/chargeE) * -1;

	printf("Total number of electrons = %le\n",electrons); //Scientific notation with %le
	printf("Total number of electrons = %lf\n",electrons); //Without scientific notation  %lf

	while(getchar() != '\n')
	{
		//Till enter char '\n' finishes it is taking the empty characters
	}

	printf("Please 'enter' key to exit the application\n");

	getchar();

	return 0;
}

