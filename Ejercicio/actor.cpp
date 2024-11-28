#include "actor.h"
#include "tarea.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

actor::actor (string nombre)
{
    this -> nombre = nombre;
    numTareas = 0;
}

string actor::getNombre ()
{
    return nombre;
}

int actor::getNumTareas ()
{
    return numTareas;
}

int actor::addTarea (tarea t)
{
    if (getNumTareas () < 10)
    {
        listaTareas.push_back(t);
        numTareas++;
    }
    return numTareas;
}

string actor::resultado ()
{
    string result = "";
    int duracionTotal = 0;

    for (int i = 0; i < numTareas; i++)
    {
        result += "Tarea: " + to_string (i) + ": " + listaTareas [i].toString () + "\n";
        duracionTotal += listaTareas [i].getDuracion ();
    }

    result += "Duracion Total: " + to_string (duracionTotal) + "\n";
    cout << result;
    return result;
}