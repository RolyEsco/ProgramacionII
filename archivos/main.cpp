#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


struct alumno{
    char nombre[30];
    char apellidos[40];
    char celular[15];
    int edad;
} p;

void leer_strcutura()
{   FILE *archivo;
    int i, j, n, x=1;
    char nombre[100];


    if(archivo=fopen("libro1.csv", "r"))
    {   while (fscanf(archivo,"%s",nombre)!=EOF)
            cout<<endl<<" nombre -> "<<nombre;
        fclose(archivo);

    }
    else
        cout<<"\nNo se ha encontrado el archivo solicitado\n";
    //fprintf(archivo,"HOLA MUNDO");

    //while (fscanf(archivo,"%s;%s;%s;%d",p.nombre,p.apellidos,p.celular,&p.edad)!=EOF)
      //  cout<<endl<<"edad -> "<<p.edad<<" nombre ->"<p.nombre;



}

void leer()
{   FILE *archivo;
    int i, j, n, x=1;
    char nombre[50];

    archivo=fopen("segundo.txt", "r");
    //fprintf(archivo,"HOLA MUNDO");

    while (fscanf(archivo,"%d;%s",&n,nombre)!=EOF)
        cout<<endl<<"edad ->"<<n<<" nombre ->"<nombre;

    fclose(archivo);

}

void matriz()
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

}
int main()
{
    cout << "Hello world!" << endl;

    leer_strcutura();
    return 0;
}
