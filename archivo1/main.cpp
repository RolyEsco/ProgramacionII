#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    FILE *archivo, *origen, *destino;
    char nom_archivo[20];
    //strcpy(src,  "archivo");
    string cadena;
    int x;

    destino=fopen("union.txt","a+");
    origen=fopen("numero1.txt","r");

    while(fscanf(origen,"%d",&x)!=EOF)
    {
        printf("\n%4d",x);
        fprintf(destino,"\n%4d",x);

    }

    fclose(origen);

    origen=fopen("numero2.txt","r");
    while(fscanf(origen,"%d",&x)!=EOF)
    {
        printf("\n%4d",x);
        fprintf(destino,"\n%4d",x);

    }
    fclose(origen);

    fclose(destino);

/*
    for(int i=0; i<10; i++)
        {
            //cadena="archivo"+i+".txt";
            //nom_archivo=strcat("archivo", "20.txt");
            //nom_archivo=strcat(nom_archivo,".txt");
            archivo=fopen("continuar.txt","w+");

            fprintf(archivo,"%d",i+1);

            fclose(archivo);
        }
    cout << "Hello world!" << endl;*/
    return 0;
}
