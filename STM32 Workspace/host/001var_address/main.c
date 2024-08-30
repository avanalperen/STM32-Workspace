/*
 * main.c
 *
 *  Created on: Aug 30, 2024
 *      Author: Alperen
 */


// Address of Variables

#include <stdio.h>

int main(void)
{

    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';

    printf("Address of variable a1 = %p \n", &a1);
    printf("Address of variable a2 = %p \n", &a2);
    printf("Address of variable a3 = %p \n", &a3);
    printf("Address of variable a4 = %p \n", &a4);
    printf("Address of variable a5 = %p \n", &a5);
    printf("Address of variable a6 = %p \n", &a6);
    printf("Address of variable a7 = %p \n", &a7);

    // %p = pointer , & put to show the address.

    unsigned long long int addressOfA1 = (unsigned long long int) & a1;

    printf("Address of variable a1 is : %I64u \n", addressOfA1);

    // I64U = is for Unsigned 64 bit long integer
    // Used this because in this compiler architecture it recognize unsigned long long it as 8 bytes which means 64 bits.

    return 0;

}

