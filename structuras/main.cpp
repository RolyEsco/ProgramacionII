#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct alumno{
    char nombre[30];
    char apellidos[40];
    char celular[15];
    int edad;
};
int N=0;

alumno programacionII[100];


void ingresar()
{
    cin.getline(programacionII[N].nombre,30);
    cout<<endl<<"-------- INGRESO DE DATOS ------ ["<<N+1<<"]"<<endl;
    cout<<"Nombre: ";
    cin.getline(programacionII[N].nombre,30);
    cout<<"Apellidos: ";
    cin.getline(programacionII[N].apellidos,40);
    cout<<"Celular: ";
    cin.getline(programacionII[N].celular,15);
    cout<<"Edad: ";
    cin>>programacionII[N].edad;
    cout<<endl<<"-------------------------------"<<endl;
    N++;
}


void ingresar_N(){
    int n, i;
    cout<<endl<<endl<<"---- INGRESAR N REGISTROS -----"<<endl;
    cout<<"Ingrese N = ";
    cin>>n;
    for(i=0; i<n; i++)
        ingresar();
}

void eliminar()
{
    printf("\n\n*** ELIMINANDO REGISTRO ****");
    int k;
    printf("\nIngrese la subindice a modificar [1-%d]: ",N);
    cin>>k;
    if(k>0 && k<=N)
    {   k--;
        printf("\n******** VISUALIZANDO DATOS ACTUALES***********\n\n");
        printf("\n REGISTRO No. %3d",k);
        printf("\n\t Nombre    :  %s",programacionII[k].nombre);
        printf("\n\t Apellidos :  %s",programacionII[k].apellidos);
        printf("\n\t Celular   :  %s",programacionII[k].celular);
        printf("\n\t Edad      :  %3d",programacionII[k].edad);

        for(int i=k; i<N-1; i++)
            programacionII[i]=programacionII[i+1];
        N--;
        cout<<endl<<"-- EL REGISTRO SE HA ELIMINADO CORRECTAMENTE --"<<endl;
    }
    else
        printf("\nEl subindice ingresado no es valido [0-%d]: ",N-1);
}


void modificar()
{
    printf("\n\n*** MODIFICANDO REGISTRO ****");
    int k;
    printf("\nIngrese la subindice a modificar [1-%d]: ",N);
    cin>>k;
    if(k>0 && k<=N)
    {   k--;
        printf("\n******** VISUALIZANDO DATOS ACTUALES***********\n\n");
        printf("\n REGISTRO No. %3d",k);
        printf("\n\t Nombre    :  %s",programacionII[k].nombre);
        printf("\n\t Apellidos :  %s",programacionII[k].apellidos);
        printf("\n\t Celular   :  %s",programacionII[k].celular);
        printf("\n\t Edad      :  %3d",programacionII[k].edad);
        cin.getline(programacionII[N].nombre,30);
        cout<<endl<<"-------- INGRESAR NUEVOS DATOS ------ ["<<N<<"]"<<endl;
        cout<<"Nombre: ";
        cin.getline(programacionII[k].nombre,30);
        cout<<"Apellidos: ";
        cin.getline(programacionII[k].apellidos,40);
        cout<<"Celular: ";
        cin.getline(programacionII[k].celular,15);
        cout<<"Edad: ";
        cin>>programacionII[k].edad;
        cout<<endl<<"-------------------------------"<<endl;
    }
    else
        printf("\nEl subindice ingresado no es valido [0-%d]: ",N-1);
}

void ordenar_nombre(){
    alumno auxiliar;
    for(int i=0; i<N-1; i++)
        for(int j=i+1; j<N; j++)
        if(strcmp(programacionII[i].nombre,programacionII[j].nombre)<0)
        {   auxiliar=programacionII[i];
            programacionII[i]=programacionII[j];
            programacionII[j]=auxiliar;
        }
    printf("\n\nLA ORDENACION POR NOMBRE HA TERMINADO SATISFACTORIAMENTE.......");
}

void mostrar_c(){
    printf("\n******** VISUALIZANDO REGISTROS***********\n\n");
    for(int k=0; k<N ; k++){
        printf("\n REGISTRO No. %3d",k);
        printf("\n\t Nombre    :  %s",programacionII[k].nombre);
        printf("\n\t Apellidos :  %s",programacionII[k].apellidos);
        printf("\n\t Celular   :  %s",programacionII[k].celular);
        printf("\n\t Edad      :  %3d",programacionII[k].edad);

    }
}

void mostrar()
{   cout<<endl<<endl<<"------ MOSTRAR INFORMACION  -------"<<endl;

    printf("%4s  ", "No");
    printf("%-30s", "NOMBRE");
    printf("%-40s", "APELLIDOS");
    printf("%-15s", "CELULAR");
    printf("%5s",   "EDAD");
    cout<<endl;
    for(int k=0; k<N ; k++)
    {
        printf("%4d  ",k+1);
        printf("%-30s",programacionII[k].nombre);
        printf("%-40s",programacionII[k].apellidos);
        printf("%-15s",programacionII[k].celular);
        printf("%5d",programacionII[k].edad);
        cout<<endl;
    }
    cout<<endl<<"--------------------------------"<<endl;
}

void calcular_edad(){
    int suma=0;
    for(int k=0; k<N ;k++)
        suma=suma+programacionII[k].edad;
    cout<<"EDAD PROMEDIO: "<<suma/N;
}

int main()
{   char opcion;
    do{
        cout <<endl<<"**  MENU PRINCIPAL  **" << endl<<endl;
        cout <<" (1) Ingresar" << endl;
        cout <<" (2) Ingresar N elementos" << endl;
        cout <<" (3) Mostrar" << endl;
        cout <<" (4) Modificar registro" << endl;
        cout <<" (5) Eliminar registro" << endl;
        cout <<" (6) Ordenar por nombre" << endl;
        cout <<" (7) Calcular edad promedio" << endl;
        cout <<" (ESC) Salir" << endl;
        cout <<endl<<"**********************" <<endl;
        cout <<"Ingrese su opcion: ";
        opcion=getch();

        switch(opcion)
        {
            case '1': ingresar(); break;
            case '2': ingresar_N();  break;
            case '3': mostrar();  break;
            case '4': modificar();  break;
            case '5': eliminar();  break;
            case '6': ordenar_nombre();  break;
            case '7': calcular_edad();  break;
        }

    }while(opcion!=27);
    cout<<endl;
    return 0;


}
