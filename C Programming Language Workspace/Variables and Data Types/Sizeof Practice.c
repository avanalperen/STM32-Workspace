#include <stdio.h>

int main()
{
    printf("Size of Char data type is : %ld \n", sizeof(char));
    printf("Size of short data type is : %ld \n", sizeof(short));
    printf("Size of int data type is : %ld \n", sizeof(int));
    printf("Size of long data type is : %ld \n", sizeof(long));
    printf("Size of long long data type is : %ld \n", sizeof(long long));
    
    /*
    
        Size of Char data type is : 1 
        Size of short data type is : 2 
        Size of int data type is : 4 
        Size of long data type is : 8 
        Size of long long data type is : 8 
    
    */
    
    // Sizes of different data types
    
    long long myLong = 1881;
    
    char size = sizeof(myLong);
    
    printf("Size of myLong variable is : %d", size);
    
    /*
    
        Output : 
        Size of myLong variable is : 8
    
    */

    return 0;
}