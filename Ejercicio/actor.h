#ifndef ACTOR_H
#define ACTOR_H
#include <iostream>
#include <string>
#include <vector>
#include "tarea.h"
using namespace std;

class actor
{
private:
    string nombre;
    vector <tarea> listaTareas;
    int numTareas;

public:
    actor (string nombre);

    string getNombre ();
    int getNumTareas ();
    int addTarea (tarea t);
    string resultado ();
};

#endif