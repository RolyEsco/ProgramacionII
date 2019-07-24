#include <iostream>
#include<stdio.h>
using namespace std;

int vector[200], N=0;

void ver(){
    printf("\nVALORES DEL VECTOR\n");
    for(int k=0; k<N; k++)
        printf("%5d",vector[k]);
}

void guardar(int valor)
{
  vector[N++]=valor;
}

bool es_primo(int numero)
{
    int k=2;

    while(k<numero)
    {   if(numero%k==0)
            break;
        k++;
    }
    if(k==numero)
         return true;
    else return false;
}

void primos()
{
    FILE *primos;
    primos=fopen("primos.txt","w");
    for(int k=0; k<N; k++)
        if(es_primo(vector[k]))
            fprintf(primos,"%5d",vector[k]);
    fclose(primos);
}

int main()
{
    FILE *origen, *destino;
    int x;

    destino=fopen("union.txt","w");
    origen=fopen("numero1.txt","r");

    while(fscanf(origen,"%d",&x)!=EOF)
    {
        fprintf(destino,"%5d",x);
        guardar(x);
    }

    fclose(origen);

    origen=fopen("numero2.txt","r");

    while(fscanf(origen,"%d",&x)!=EOF)
    {
        fprintf(destino,"%5d",x);
        guardar(x);
    }


    fclose(origen);
    fclose(destino);

    ver();
    primos();
    cout << "Hello world!" << endl;
    return 0;
}
