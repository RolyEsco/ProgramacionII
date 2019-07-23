#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

//declaracion de la escructura
struct alumno{
    char nombre[30];
    char apellidos[40];
    char celular[15];
    int edad;
} ;
alumno programacionII[100];
int N=0;

void edad_promedio()
{   float promedio=0.0;
    for(int i=0; i<N ;i++)
        promedio+=programacionII[i].edad/N;
    cout << "***  EDAD PROMEDIO ***" <<endl;
    cout << " X = "<<promedio<<endl;
}

void ingresar(){
    cout << "***  INGRESO DE DATOS ***" << endl<<endl;
    cout << "-- Registro No. "<<N+1<< " --"<<endl;
    cout << "Nombre :";
    cin>>programacionII[N].nombre;
    cout << "Apellidos :";
    cin>>programacionII[N].apellidos;
    cout << "Celular :";
    cin>>programacionII[N].celular;
    cout << "Edad :";
    cin>>programacionII[N].edad;
    N++;
}

void ingresar_N(){
    int n;
    cout << "***  INGRESO DE N REGISTROS ***" << endl<<endl;
    cout << "Ingrese la cantidad N:";
    cin>>n;
    for(int i=0; i<n; i++)
        ingresar();
}


void mostrar2(){
    cout<<endl<<"** INFORMACION DE LA ESTRUCTURA **"<<endl;
    for(int k=0; k<N ; k++)
    {   cout << "-- Registro No. "<<k+1<< " --"<<endl;
        printf("\n\t NOMBRE   : %-20s", programacionII[k].nombre);
        printf("\n\t APELLIDO : %-30s", programacionII[k].apellidos);
        printf("\n\t CELULAR  : %-15s", programacionII[k].celular);
        printf("\n\t EDAD     : %5d", programacionII[k].edad);
    }
}


int main()
{   char opcion;

    do{
        cout << "***  MENU PRINCIPAL ***" << endl << endl;
        cout << " (1) Ingreso de Datos" << endl;
        cout << " (2) Ingresar N registros" << endl;
        cout << " (3) Mostrar datos" << endl;
        cout << " (4) Calcular edad promedio" << endl;
        cout << " (ESC) para salir" << endl;
        opcion=getch();
        switch(opcion)
        {   case '1': ingresar(); break;
            case '2': ingresar_N();  break;
            case '3': mostrar2();  break;
            case '4': edad_promedio();  break;
        }

    }while(opcion!=27);

    return 0;
}
