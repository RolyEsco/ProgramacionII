#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;


struct alumno{
    char nombre[30];
    char apellidos[40];
    char celular[15];
    int edad;
} programacionII[100];
int N=0;


void mostrar()
{   cout<<endl<<endl<<"------ MOSTRAR INFORMACION  -------"<<endl;

    printf("%-5s  ", "No.");
    printf("%-30s", "NOMBRE");
    printf("%-40s", "APELLIDOS");
    printf("%-15s", "CELULAR");
    printf("%5d",   "EDAD");
    cout<<endl;
    for(int k=0; k<N ; k++)
    {
        printf("%5d  ",k+1);
        printf("%-30s",programacionII[k].nombre);
        printf("%-40s",programacionII[k].apellidos);
        printf("%-15s",programacionII[k].celular);
        printf("%5d",programacionII[k].edad);
        cout<<endl;
    }
    cout<<endl<<"--------------------------------"<<endl;
}


void leer_strcutura()
{   FILE *archivo;
    int i, j, n, x=1;
    char *token, linea[100];


    if(archivo=fopen("libro1.csv", "r"))
    {

        /*fgets(linea,50,archivo);

            token=strtok(linea,";");
            strcpy(programacionII[N].nombre,token);
            token=strtok(NULL,";");
            strcpy(programacionII[N].apellidos,token);
            token=strtok(NULL,";");
            strcpy(programacionII[N].celular,token);
            token=strtok(NULL,";");
            programacionII[N].edad=atoi(token);
            N++;
*/
            cout<<endl<<" nombre -> "<<linea;

        while (fgets(linea,50,archivo)!=NULL)
        {


            token=strtok(linea,";");
            strcpy(programacionII[N].nombre,token);
            token=strtok(NULL,";");
            strcpy(programacionII[N].apellidos,token);
            token=strtok(NULL,";");
            strcpy(programacionII[N].celular,token);
            token=strtok(NULL,";");
            programacionII[N].edad=atoi(token);
            N++;

            cout<<endl<<" nombre -> "<<linea;

        }
        mostrar();
        fclose(archivo);

    }
    else
        cout<<"\n No se ha encontrado el archivo solicitado\n";
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

    mostrar();
    return 0;
}
