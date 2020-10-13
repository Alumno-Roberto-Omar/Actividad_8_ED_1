#include<iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1 = Computadora("Equipo_nuevo_1","Windows 7",450,4);

    Computadora c2;
    c2.setNombre("Compu_Omar");
    c2.setSistema("Windows 10");
    c2.setDisco(1000);
    c2.setRam(8);

    Computadora c3 = Computadora("PC_User_1","Windows 8",500,4);

    Laboratorio lb;

    lb.agregarFinal(c1);
    lb.agregarFinal(c2);
    lb.agregarFinal(c3);

    lb.mostrar();
    
    return 0;
}