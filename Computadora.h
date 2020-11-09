#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    private:
        string nombre_equipo;
        string sistema_operativo;
        int disco_duro;
        int memoria_ram;
    public:
        Computadora();
        Computadora(const string &nombre_equipo, const string &sistema_operativo, int disco_duro, int memoria_ram);

        void setNombre_equipo(const string &v);
        string getNombre_equipo();
        void setSistema_operativo(const string &v);
        string getSistema_operativo();
        void setDisco_duro(int v);
        int getDisco_duro();
        void setMemoria_ram(int v);
        int getMemoria_ram();
        friend ostream& operator<<(ostream &out, const Computadora &p)
        {
            out << left;
            out <<setw(12)<<p.nombre_equipo;
            out <<setw(13)<<p.sistema_operativo ;
            out <<setw(6)<<p.disco_duro ;
            out <<setw(6)<<p.memoria_ram ;
            out <<endl;
            return out;
        }
        friend istream& operator>>(istream &in, Computadora &p)
        {
            //string temp;
            //int p.disco_duro,p.memoria_ram;
            cout << "Nombre:";
            getline(cin,p.nombre_equipo);

            cout << "Sistema operativo:";
            getline(cin,p.sistema_operativo);

            cout << "Disco duro:";
            cin >>p.disco_duro;

            cout << "Memoria RAM:";
            cin >>p.memoria_ram;

            return in;
        }

    bool operator==(const Computadora& p)
    {
        return nombre_equipo == p.nombre_equipo;
    }
    bool operator==(const Computadora& p) const
    {
        return nombre_equipo == p.nombre_equipo;
    }
    bool operator<(const Computadora& p)
    {
        return 2;
    }
    bool operator<(const Computadora& p) const
    {
        return nombre_equipo < p.nombre_equipo;
    }
};

#endif // COMPUTADORA_H
