#include<iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio lb;

    /*1. Primero se ejecuta esta parte para ingresar los datos y respaldar en un
    documento de texto. */
    /*cout<<"Ingrese los datos para el equipo:"<<endl;
    Computadora c1;
    cin>>c1;
    lb<<c1;

    Computadora c2 = Computadora("Equipo_2","Windows 8",600,3);
    lb<<c2;

    Computadora c3= Computadora("Equipo_3","Windows 10",1000,4);
    lb<<c3;*/

    //lb.respaldartabla();
    //lb.respaldar();

    /*2. Esta parte del código sirve para recuperar los datos del documento de 
    texto y mostrarlos, la ejecuto aparte porque al ejecutarla junto con el 
    método para respaldar, pues el método de recuperacion leera dos veces el 
    documento de texto. */
    cout<<endl;
    lb.recuperar();
    lb.mostrar();

    return 0;
}