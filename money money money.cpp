#include <stdio.h>

#include "cs50.h"

int main(void)
{
    int n;
    float b;
    float r;
    b = GetFloat();
    r = GetFloat();
    n = GetInt();
    
   
    for(int i=1;i<=n;i++)
    {
       b = (b*(1+r));
    }
    
    printf("%.2f",b);

}
