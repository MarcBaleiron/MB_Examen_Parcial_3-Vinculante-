#ifndef TAREA_H
#define TAREA_H
#include <string>
using namespace std;

// Clase tarea creada

class tarea
{
// Atributos de la clase tarea definidos

private:
    string id;
    string descripcion;
    int duracion;

// Funciones de la clase tarea creadas

public:
    tarea ();
    tarea (string id, string descripcion, int duracion);

    string getId () const;
    string getDescripcion () const;
    int getDuracion () const;
    string toString () const;
};

#endif