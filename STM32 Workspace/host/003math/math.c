/*
 * math.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Alperen
 */

int math_add(int n1, int n2)
{
	int sum = n1 + n2;

	return sum;
}

int math_sub(int n1, int n2)
{
	int sub = n1 - n2;

	return sub;
}

//	The result may exceed so use long long int instead int

long long int math_mul(int n1, int n2)
{
	long long int mul = n1 * n2;

	return mul;
}

// The result may be with decimal so use float instead int

float math_div(int n1, int n2)
{
	float div = n1 / n2;

	return div;
}
