#include "laboratorio.h"

#include <string>

using namespace std;

Laboratorio::Laboratorio()
{
    cont=0;
}

void Laboratorio::agregarFinal(const Computadora &p)
{
    if(cont<5){
        arreglo[cont] = p;
        cont++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    cout<<"Equipos"<<endl;
    cout<<left;
    cout<<setw(15)<<"Nombre:";
    cout<<setw(15)<<"Sistema:";
    cout<<setw(8)<<"Disco:";
    cout<<setw(6)<<"RAM:";
    cout<<endl;
    for(size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout<<p;
    }
}