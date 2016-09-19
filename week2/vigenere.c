#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc,  string argv[])
{
    int shift;
    if (argc != 2)
    {
        printf("message");
        return 1;
    }
    
    string key = argv[1];
    int m = strlen(key);
    for(int i = 0; i < m; i++)
    {
        if(!isalpha(key[i]))
        {
            printf("message");
            return 1;
        }
    }
    // Get string
    string p = GetString();
    
    for(int i = 0, j = 0, n = strlen(p); i < n; i++)
    {
        if(isalpha(p[i]))
        {
            if (islower(key[j%m]))
            {
                shift = key[j%m] - 'a';
               if (islower(p[i]))
               {
                p[i] = (p[i] - 'a' + shift) % 26 +'a';
               }
               else
               {
               p[i] = (p[i] - 'A' + shift) % 26 +'A';
               }
            }
            else
            {
                shift = key[j%m] - 'A';
                if (islower(p[i]))
                {
                p[i] = (p[i] -'a' + shift) % 26 + 'a';
                }
                else
                p[i] = (p[i] -'A' + shift) % 26 + 'A';
            }
            printf("%c", p[i]);
            j++;
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}