
//Global Scope Variable vs Local Scope Variable

#include <stdio.h>

void myFunction(void);

// Global scope variable can be using in everywhere.   

int myGlobalScore = 5;

int main(void)
{

    // Local scope variable can only be using in the function its defined.

    int myLocalScore;

    // This is a function call

    myFunction();

    // Output is : 5

    return 0;

}

//This is a function definitiyon

void myFunction(void)
{
    printf("%d", myGlobalScore);
}