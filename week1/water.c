#include "cs50.h"
#include <stdio.h>

int main(void)
{
    printf("Please write, how many minutes did you take shower yesterday: ");
    int x = GetInt();

    printf("Remember that %d-minute shower is like using %d bottles of water!\n", x, x * 12);
}
