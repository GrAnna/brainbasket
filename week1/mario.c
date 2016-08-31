#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
    printf("Give me number between 0 and 23: \n");
    n = GetInt();
    }
    while (n > 23 || n < 1);
    
    for (int i = 0; i < n; i++)
    {
    int hash = 0;
    int space = n - 1;
    while (space > i)
    {
        printf(" ");
        space--;
    }
    do
    {
    printf("#");
    hash++;
    }
    while (hash < i + 2);
    printf("\n");
    }
    return 0;
}