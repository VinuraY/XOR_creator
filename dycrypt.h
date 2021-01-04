#include <stdio.h>
void dycrypt(char *msg)
{
    while (*msg)
    {
        *msg = *msg ^ 20;
        *msg++;
    }
}