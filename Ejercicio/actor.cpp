#include "actor.h"
#include "tarea.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Clase actor definida

actor::actor (string nombre)
{
    this -> nombre = nombre;
    numTareas = 0;
}

// Función para obtener el nombre del actor

string actor::getNombre ()
{
    return nombre;
}

// Función para obtener el número de tareas del actor

int actor::getNumTareas ()
{
    return numTareas;
}

// Función para aádir tareas al actor

int actor::addTarea (tarea t)
{
    if (getNumTareas () < 10)
    {
        listaTareas.push_back (t);
        numTareas++;
    }
    return numTareas;
}

// Función para obtener las tareas hechas por el actor y la duración de las tareas de este

string actor::resultado ()
{
    string result = getNombre () + ":\n";
    int duracionTotal = 0;

    for (int i = 0; i < getNumTareas (); i++)
    {
        result += "Tarea: " + to_string (i) + ": " + listaTareas [i].toString () + "\n";
        duracionTotal += listaTareas [i].getDuracion ();
    }

    result += "Duracion Total: " + to_string (duracionTotal) + " min\n";
    cout << result << "\n";
    return result;
}