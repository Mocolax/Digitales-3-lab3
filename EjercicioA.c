#include <stdio.h>

int a = 0;

int main() 
{
    for(long i = 0; i < 1000000000; i++)
    {
    	a = 1;
    }
    printf("Termino");
}
