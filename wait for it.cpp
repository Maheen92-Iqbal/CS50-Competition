#include <stdio.h>

#include "cs50.h"

int main(void)
{
    int num = GetInt();
    
    int values[num];
    
    for(int i=0;i<num;i++)
    {
        values[i] = GetInt();
    }
    
    int bus;
    int j;
    
    if((values[1] - values[0]) > (values[2] - values[1]))
    {
        bus = values[2];
        printf("%d\n", bus);
        j = 3;
    }
    else if((values[1] - values[0]) < (values[2] - values[1]))
    {
        bus = values[1];
        printf("%d\n", bus);
        j = 2;
    }
    
    int count = 0;
    int sum = 0;
    
    for(int k=0;k<num;k++)
    {
        count = count + 1;
    }
    
    int middle = (count/2);
    
    
    if(num%2 == 0)
    {
        printf("%d\n", values[j+middle-2]);
    }
    else if(num%2 != 0)
    {
        printf("%d\n", values[j+middle-2]);
    }
    
    printf("%d\n", values[num-1]);
    
    return 0;
}
