/*
 * ASCII.c
 *
 *  Created on: Oct 15, 2024
 *      Author: Alperen
 */

#include <stdio.h>

int main(void)
{
	char c1,c2,c3,c4,c5,c6;

	printf("Enter any 6 characters of your choice : ");

	//scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);

	for(int i=0;i<6;i++)
	{
		getchar()
	}

	printf("\nASCII codes : %u,%u,%u,%u,%u,%u\n",c1,c2,c3,c4,c5,c6);

	printf("Pres enter key to exit the application \n");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}

