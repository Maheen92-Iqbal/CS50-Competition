#include <stdio.h>

#include "cs50.h"

int main(void)
{
   int number = GetInt();
   
   if (number%2 == 0 || number < 3 || number > 23)
   {
       return 0;
   }
    
   for(int i=0;i<number;i++)
   {
      for(int j=0;j<number;j++)
      {
          if(i==j || j==(number-i-1))
          {
              printf("*");
          }
          else if(i == 0 || i == number-1 || j == 0 || j == number-1)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
      }
       
      printf("\n");
   }
}