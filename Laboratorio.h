#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"
#include <vector>

class Laboratorio
{
    private:
        vector<Computadora> computadoras;


    public:
        Laboratorio();
        void agregarComputadora(const Computadora &p);
        void mostrar();
        void respaldar_tabla();
        void respaldar();
        void recuperar();
        void insertar(const Computadora &p, size_t pos);
        size_t size();
        void inicializar(const Computadora &p, size_t n);
        void eliminar(size_t pos);
        void ordenar();
        Computadora* buscar(const Computadora &p);
        friend Laboratorio& operator<<(Laboratorio &l, const Computadora &p)
        {
            l.agregarComputadora(p);
            return l;
        }
};

#endif // LABORATORIO_H
