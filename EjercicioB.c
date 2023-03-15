#include <stdio.h>

long a = 0;

int main() 
{
    for(long i = 0; i < 1000000000; i++)
    {
    	a = a + 1;
    }
    printf("Termino");
}
