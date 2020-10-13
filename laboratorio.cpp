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
    cout<<endl;
    cout<<"Equipos: "<<endl;
    for(size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout<< "Nombre del equipo: " << p.getNombre() << endl;
        cout<< "Sistema Operativo: " << p.getSistema() << endl;
        cout<< "Disco: " << p.getDisco() << " GB" << endl;
        cout<< "RAM: " << p.getRam() << "GB" << endl;
        cout<<endl;
    }
}