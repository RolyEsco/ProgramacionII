#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo;
	char caracter;

	archivo = fopen("texto.txt","w");

	if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(archivo)) != EOF)
            {
                printf("%c",caracter);
            }

	    printf("\n\n");

        }
        fclose(archivo);
	return 0;
}
