#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora{
    string nombre;
    string sistema;
    int disco;
    int ram;

    public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, int disco, int ram);
    void setNombre(const string &v);
    string getNombre();
    void setSistema(const string &v);
    string getSistema();
    void setDisco(int v);
    int getDisco();
    void setRam(int v);
    int getRam();
};

#endif