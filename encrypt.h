#include <stdio.h>
void encrypt(char *msg)
{
    while (*msg)
    {
        *msg = *msg ^ 20;
        *msg++;
    }
}