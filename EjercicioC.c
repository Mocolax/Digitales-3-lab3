#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo;
    char caracter;

    archivo = fopen("archivo.txt","w");
    fprintf(archivo, "0");
    fclose(archivo);
    for(int i = 0; i < 1000; i++)
    {
    	archivo = fopen("archivo.txt", "a+");
    	fprintf(archivo, "1");
    	fclose(archivo);
    }
    
}
