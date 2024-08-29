#include <stdio.h>

// Declaration vs Definition

extern myExternalScore;

/*

    Declaration : A statement that informs the compiler about the existence of a variable or function, 
    specifying its type without allocating memory. For example, extern int globalVar; 
    declares globalVar in global scope, making it accessible in other files.
    
    Especially extern command tells the compiler about a variable defined elsewhere, 
    allowing access in other files.

*/

int main()
{
    
    int myInternalScore;

/*

    Definition: A statement that allocates memory and initializes the variable or function. 
    For example, int globalVar = 10; defines globalVar in global scope.

*/
    
    return 0;
}