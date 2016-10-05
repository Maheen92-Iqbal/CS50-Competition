#include <stdio.h>

#include "cs50.h"

int main(void)
{
    string s = GetString();
    char temp;
    
    int len = strlen(s)+1;
    int j;
    int i;
    int k;
    
    for(i=0,j=0;j<=len;j++)
    {
        if(!isalnum(s[j]) || j == len)
        {
            if(j<len)
            {
                k = j - 1;
            }
            else
            {
                k = j;
            }
            
            while(i<k)
            {
                temp = s[i];
                s[i] = s[k];
                s[k] = temp;
                i++;
                k--;
            }
            
            i = j + 1;
        }
    }
    
    printf("%s", s);
    return 0;
}
