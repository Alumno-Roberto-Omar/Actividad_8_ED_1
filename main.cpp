#include<iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1 = Computadora("Equipo_nuevo_1","Windows 7",450,4);
    Computadora c2 = Computadora("PC_Omar","Windows 10", 1000, 8);
    Computadora c3 = Computadora("PC_User_1","Windows 8",500,4);

    Laboratorio lb;

    lb<<c1<<c2<<c3;

    Computadora c4;
    cin>>c4;
    lb<<c4;

    cout<<endl;

    lb.mostrar();
    
    return 0;
}