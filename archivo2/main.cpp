#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    char nombre[20],aux[5];
    FILE *archivo;

    for(i=0; i<10; i++)
    {
        strcpy(nombre,"archivo");
        strcat(nombre,itoa(i+1,aux,10));
        strcat(nombre,".txt");

        archivo=fopen(nombre,"w+");
        fprintf(archivo, "%d", i+1);
        fclose(archivo);

        cout<<endl<<nombre;
    }

    cout <<endl<< "Hello world!" << endl;
    return 0;
}




