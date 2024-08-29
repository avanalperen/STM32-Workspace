#include <stdio.h>

int main()
{
    
    unsigned char distanceAtoB = 160;
    unsigned char distanceBtoC = 40;
    
    unsigned char distanceAtoC = distanceAtoB + distanceBtoC;
    
    printf("The distance between A to B is : %d Km\n",distanceAtoC);
    
    /*  
    
        Output : The distance between A to B is : 200 Km
        
    */
    
    /*
    
        The char data type is generally used to represent characters (e.g., 'A', 'B', etc.), 
        but technically, it can store numbers in the range of 0-255(1 byte =8 bits). This is because char is 
        actually an integer type that occupies 1 byte in memory. So, while it usually represents characters, 
        you can also use it to store and manipulate numeric values within this range.
    
    */
    
    return 0;
}
