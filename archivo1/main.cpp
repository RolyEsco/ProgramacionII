#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    FILE *archivo;

    archivo=fopen("hola_mundo.txt","w+");

    fprintf(archivo,"HOLA MUNDO");

    fclose(archivo);

    cout << "Hello world!" << endl;
    return 0;
}
