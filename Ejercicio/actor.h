#ifndef ACTOR_H
#define ACTOR_H
#include <string>
#include <vector>
#include "tarea.h"
using namespace std;

// Clase actor creada

class actor
{
// Atributos de la clase actor definidos

private:
    string nombre;
    vector <tarea> listaTareas;
    int numTareas;

// Funciones de la clase actor creadas

public:
    actor (string nombre);

    string getNombre () const;
    int getNumTareas () const;
    int addTarea (tarea t);
    string resultado () const;

    // Función para obtener una tarea del actor

    tarea getTarea (int index) const
    {
        return listaTareas [index];
    }
};

#endif