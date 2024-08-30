
// Storage Classes Specifiers ( static and extern)

#include <stdio.h>

void myFun1(void);

int main(void)
{

    myFun1();

    myFun1();

    myFun1();

    myFun1();

    /*
        Output :

        This function is executed 1 time(s)
        This function is executed 2 time(s)
        This function is executed 3 time(s)
        This function is executed 4 time(s)

    */

    return 0;

}

void myFun1(void)
{

    static int count = 0;

    // If this variable defined in local scope without static it would be destroyed every time the function is called.
    // So, it has to be need to defined as global or static(specified variable for only 1 function).
    // With this method(put static) it makes the variable global and only can be using for one function at a time.
    // And, this 'count' variable is only accessible from this function.
    // The scope of this variable is not exactly global but visibility is only for this function and the value of this variable is protected.

    count += 1;

    printf("This function is executed %d time(s)\n", count);
        
}
