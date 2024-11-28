#ifndef TAREA_H
#define TAREA_H
#include <iostream>
#include <string>
using namespace std;

class tarea
{
private:
    string id;
    string descripcion;
    int duracion;

public:
    tarea (string id, string descripcion, int duracion);

    string getId ();
    string getDescripcion ();
    int getDuracion ();
    string toString ();
};

#endif