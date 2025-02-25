/*
 * scanf_new.c
 *
 *  Created on: Oct 15, 2024
 *      Author: Alperen
 */

#include <stdio.h>

int main(void)
{
	double first,second,third;
	double averageResult;

	printf("Please enter three numbers : \n");

	fflush(stdout);

	scanf("%lf %lf %lf",&first,&second,&third);

	averageResult = (first+second+third)/3;

	printf("\nAverage result is : %0.3f \n",averageResult);

	// Using fflush is beacuse of the fflash, is needed to clean for scanf process after the printf cleaned
	// Without fflush application cant be run from STMIDE terminal
	// From exe file, the file can be run from cmd
	// Also the app can be directly run from debug file by clicking but
	// for that the program shouldnt closed after enter everything so need to put getchar to dont close after enter everything

	printf("\nPlease enter key to exit the application.");

	getchar();

	// The remain \n after the last scanf will broke this code so neet to type it twice for program to understand

	getchar();

	/* This method is also a solution, same logic but with while function
		 while(getchar() != '\n')
		 {

		 }
	 */
}



