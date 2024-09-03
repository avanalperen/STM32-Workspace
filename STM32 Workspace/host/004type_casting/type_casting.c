/*
 * type_casting.c
 *
 *  Created on: Sep 3, 2024
 *      Author: Alperen
 */

#include <stdio.h>

int main(void)
{

	// 0x87 = 135 , 0xFF00 = 65280 , 0x87+0xFF00 = 65415
	// 65415 = 1111111110000111 in binary system , which means 16 bits = 2 bytes
	// 1 Unsigned char data can hold only 8 bits = 1 byte

	// Implicit Casting which Compiler does

	unsigned char data = (0x87+0xFF00);

		float result = 80/3;

		printf("Data : %u\n",data);
		printf("Result : %f\n",result);

	// Explicit Casting which Programmer does

	unsigned char data2 = (unsigned char) (0x87+0xFF00);

	float result2 = (float)80/3;

	printf("Data : %u\n",data2);
	printf("Result : %f\n",result2);

	// Another Example

	// 0x1FFFFFFFA0B0 = 1.125899906842624 × 10^15 , 6 bytes = 48 bits
	// 0x1245 = 4661 , 2 bytes = 16 bits

	unsigned char data3 = 0x1FFFFFFFA0B0 + 0x1245;

}

