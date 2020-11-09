#include "Computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &nombre_equipo,
                         const string &sistema_operativo,
                         int disco_duro,
                         int memoria_ram)
{
    this->nombre_equipo = nombre_equipo;
    this->sistema_operativo = sistema_operativo;
    this->disco_duro = disco_duro;
    this->memoria_ram = memoria_ram;
}

void Computadora::setNombre_equipo(const string &v)
{
    nombre_equipo = v;
}
string Computadora::getNombre_equipo()
{
    return nombre_equipo;
}

void Computadora::setSistema_operativo(const string &v)
{
    sistema_operativo = v;
}
string Computadora::getSistema_operativo()
{
    return sistema_operativo;
}

void Computadora::setDisco_duro(int v)
{
    disco_duro = v;
}
int Computadora::getDisco_duro()
{
    return disco_duro;
}

void Computadora::setMemoria_ram(int v)
{
    memoria_ram = v;
}
int Computadora::getMemoria_ram()
{
    return memoria_ram;
}
