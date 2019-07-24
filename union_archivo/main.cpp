#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    FILE *origen, *destino;
    int x;

    destino=fopen("union.txt","a");
    origen=fopen("numero1.txt","r");

    while(fscanf(origen,"%d",&x)!=EOF)
        fprintf(destino,"%5d",x);

    fclose(origen);
    fclose(destino);


    cout << "Hello world!" << endl;
    return 0;
}
