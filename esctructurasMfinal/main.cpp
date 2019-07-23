#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
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


void mostrar_registro(int k)
{
        cout << "-- Registro No. "<<k+1<< " --"<<endl;
        printf("\n\t NOMBRE   : %-20s", programacionII[k].nombre);
        printf("\n\t APELLIDO : %-30s", programacionII[k].apellidos);
        printf("\n\t CELULAR  : %-15s", programacionII[k].celular);
        printf("\n\t EDAD     : %5d", programacionII[k].edad);
}

void mostrar2(){
    cout<<endl<<"** INFORMACION DE LA ESTRUCTURA **"<<endl;
    for(int k=0; k<N ; k++)
    {   mostrar_registro(k);
            }
}

void modificar()
{   cout<<endl<<"** MODIFICAR REGISTRO **"<<endl;
    int x;
    printf("\n\nIngrese la posicion a modificar [1, %d]",N);
    cin>>x;
    x--;
    if(x>=0 && x<N)
    {   mostrar_registro(x);
        cout <<endl<<"-- Registro No. "<<x+1<< " --"<<endl;
        cout << "Nombre :";
        cin>>programacionII[x].nombre;
        cout << "Apellidos :";
        cin>>programacionII[x].apellidos;
        cout << "Celular :";
        cin>>programacionII[x].celular;
        cout << "Edad :";
        cin>>programacionII[x].edad;
    }
    else
    cout<<endl<<"El subindice ingresado no es valido";


}
void ordenar()
{   alumno auxiliar;
    for(int i=0; i<N-1; i++)
        for (int j=i; j<N; j++)
            if(strcmp(programacionII[i].nombre, programacionII[j].nombre)>0)
            {
                auxiliar=programacionII[i];
                programacionII[i]=programacionII[j];
                programacionII[j]=auxiliar;
            }
        printf("\n\n EL PROCESO DE ORDENACION HA CONCLUIDO SATISFACTORIAMENTE" );

}


int main()
{   char opcion;

    do{
        cout << "***  MENU PRINCIPAL ***" << endl << endl;
        cout << " (1) Ingreso de Datos" << endl;
        cout << " (2) Ingresar N registros" << endl;
        cout << " (3) Mostrar datos" << endl;
        cout << " (4) Ordenar por nombre" << endl;
        cout << " (5) Modificar registro" << endl;
        cout << " (6) Calcular edad promedio" << endl;
        cout << " (ESC) para salir" << endl;
        opcion=getch();
        switch(opcion)
        {   case '1': ingresar(); break;
            case '2': ingresar_N();  break;
            case '3': mostrar();  break;
            case '4': ordenar();  break;
            case '5': modificar();  break;
            case '6': edad_promedio();  break;
        }

    }while(opcion!=27);

    return 0;
}
