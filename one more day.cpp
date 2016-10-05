#include <stdio.h>

#include "cs50.h"

int main(void)
{
     int Y ;
    
  scanf("%d",&Y);
 
   if(Y%4 == 0)
    {
        if(Y%100 == 0)
        {
            
            if (Y%400 == 0)
                printf("Leap Year");
            else
                printf("Not Leap Year");
        }
        else
            printf("Leap Year");
    }
    else
        printf("Not Leap Year");
    
    
}
