#include <fstream>
#include <algorithm>
#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    
}

void Laboratorio:: agregarComputadora(const Computadora &p)
{
    computadoras.push_back(p);
}
void Laboratorio::mostrar()
{
    cout <<left;
    cout <<setw(12)<<"Nombre";
    cout <<setw(13)<<"Sistema Op.";
    cout <<setw(6)<<"HDD";
    cout <<setw(6)<<"RAM";
    cout << endl;
    for (size_t i=0; i< computadoras.size(); i++){
        Computadora &p= computadoras[i];
        cout << p;
        //cout<< "Nombre del equipo: "<< p.getNombre_equipo()<<endl;
        //cout<< "Sistema operativo: "<< p.getSistema_operativo()<<endl;
        //cout<< "Tamaï¿½o del disco duro: "<< p.getDisco_duro()<<" GB"<<endl;
        //cout<< "Tamaï¿½o memoria RAM: "<< p.getMemoria_ram()<<" GB"<<endl;
        //cout<< endl;
    }
}
void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo <<left;
        archivo <<setw(12)<<"Nombre";
        archivo <<setw(13)<<"Sistema Op.";
        archivo <<setw(6)<<"HDD";
        archivo <<setw(6)<<"RAM";
        archivo << endl;
        for (size_t i=0; i< computadoras.size(); i++){
            Computadora &p= computadoras[i];
            archivo << p;

        }
    }
    archivo.close();
}
void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for (size_t i=0; i<computadoras.size(); i++){
            Computadora &p= computadoras[i];
            archivo << p.getNombre_equipo()<<endl;
            archivo << p.getSistema_operativo()<<endl;
            archivo << p.getDisco_duro()<<endl;
            archivo << p.getMemoria_ram()<<endl;

        }
    }
    archivo.close();
}
void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int disco_duro, memoria_ram;
        Computadora p;

        while(true)
        {
            getline(archivo, temp);
            if (archivo.eof()){
                break;
            }
            p.setNombre_equipo(temp);

            getline(archivo, temp);
            p.setSistema_operativo(temp);

            getline(archivo, temp);
            disco_duro = stof(temp);
            p.setDisco_duro(disco_duro);

            getline(archivo, temp);
            memoria_ram = stoi(temp);
            p.setMemoria_ram(memoria_ram);

            agregarComputadora(p);
        }
    }
    archivo.close();
}
void Laboratorio::insertar(const Computadora &p, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos, p);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &p, size_t n)
{
    computadoras = vector<Computadora>(n, p);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &p)
{
    // vector<Computadora>::iterator
    auto it = find(computadoras.begin(),computadoras.end(), p);

    if (it == computadoras.end()) {
        return nullptr;
    }
    else {
        return &(*it);
    }
}
