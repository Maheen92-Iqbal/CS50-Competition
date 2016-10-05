#include <stdio.h>

#include "cs50.h"
#include <string.h>

int main(void)
{
    int num = GetInt();
    string s = GetString();
    char temp;
    char name[strlen(s)+1];
    
    int j = strlen(s) + 1 - 1;
    int i = 0;
    int k = 0;
    
    while(i<strlen(s)+1)
    {
        temp = s[i];
        
        if(temp == 'e' || temp == 'c' || temp == 'a' || temp == 'i' || temp == 'k' || temp == 'n' || temp == 't')
        {
            while(j>=0)
            {
                if(s[j] == 'e' || s[j] == 'c' || s[j] == 'a' || s[j] == 'i' || s[j] == 'k' || s[j] == 'n' || s[j] == 't')
                {
                    name[k] = s[j];
                    j = j - 1;
                    break;
                }
                j = j - 1;
            }
        }
        else
        {
            name[k] = temp;
        }
        
        i ++;
        k ++;
    }
    
    printf("%s", name);
    return 0;
    
    
    
}