#include "laboratorio.h"
#include<fstream>
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

void Laboratorio::respaldartabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo<<left;
        archivo<<"Equipos de computo"<<endl;
        archivo<<setw(15)<<"Nombre:";
        archivo<<setw(15)<<"Sistema:";
        archivo<<setw(8)<<"Disco:";
        archivo<<setw(6)<<"RAM:";
        archivo<<endl;
        for(size_t i=0; i<cont; i++){
            Computadora &p = arreglo[i];
            archivo<<p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i=0; i<cont; i++){
            Computadora &p = arreglo[i];
            archivo<<p.getNombre()<<endl;
            archivo<<p.getSistema()<<endl;
            archivo<<p.getDisco()<<endl;
            archivo<<p.getRam()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int disco;
        int ram;
        Computadora p;
        while(true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setNombre(temp);

            getline(archivo, temp);
            p.setSistema(temp);

            getline(archivo, temp);
            disco = stoi(temp);
            p.setDisco(disco);

            getline(archivo, temp);
            ram = stoi(temp);
            p.setRam(ram);

            agregarFinal(p);
        }
    }
    archivo.close();
}