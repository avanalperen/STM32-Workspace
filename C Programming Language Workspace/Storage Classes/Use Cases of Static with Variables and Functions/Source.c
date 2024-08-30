
// Use cases of 'static' with variables

#include <stdio.h>

void source2_myFun1(void);

void change_system_clock(int system_clock);

// And, if we dont want to share this function with another files we set 'static' the function
    
int mainPrivateData;

// And, if we dont want to share this variable with another files we set 'static' the variable

int main(void)
{
    mainPrivateData = 0;

    printf("mainPrivateData = %d\n", mainPrivateData);

    change_system_clock(1);

    source2_myFun1();

    printf("mainPrivateData = %d\n", mainPrivateData);
    
    return 0;
}

void change_system_clock(int system_clock)
{

    printf("System clock changed to = %d \n", system_clock);
            
}

