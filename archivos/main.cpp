#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    FILE *archivo;
    int i, j, n, x=1;

    archivo=fopen("segundo.txt", "w+");
    fprintf(archivo,"HOLA MUNDO");
    cout<<"ingrese el tamanio: ";
    cin>>n;
    printf("\n");
    fprintf(archivo,"\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {   printf("%5d",x);
            fprintf(archivo,"%5d",x++);

        }
        printf("\n");
        fprintf(archivo,"\n");
    }

    fclose(archivo);
    cout << "Hello world!" << endl;
    return 0;
}
