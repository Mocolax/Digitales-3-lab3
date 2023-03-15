#include <stdio.h>

double a = 1;

int main() 
{
    for (int i = 2; i < 100 ; i++)
    {
    	a = a * i;
    }
    printf("%f", a);
    a = 1;
    for (int i = 2; i < 1000 ; i++)
    {
    	a = a * i;
    }
    printf("%f", a);
    a = 1;
    for (int i = 2; i < 2000 ; i++)
    {
    	a = a * i;
    }
    printf("%f", a);
}
