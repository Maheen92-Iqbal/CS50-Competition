#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string name = GetString();
    int len = strlen(name);
    char* new_name = malloc(sizeof(char) * sizeof(len) + 1);
   
    int i = 0;
    int j = 0;
    for (i=0;i<=strlen(name);i++)
    {        
       
        if (name[i] == ',')
        {
           new_name[j]  = name[i]; 
           new_name[j+1] = ' ';
           j = j + 2;
        }
        else if (name[i] == '.')
        {
           new_name[j]  = name[i]; 
           new_name[j+1] = ' ';
           j = j + 2;
        }
        else if (isalpha(name[i]) && name[i-1] == '.')
        {
           new_name[j]  = toupper(name[i]); 
           j = j + 1;
        }
        else
        {
            new_name[j] = name[i];
            j = j + 1;
        }
        
    }
    printf("%s", new_name);
    return 0;
}
