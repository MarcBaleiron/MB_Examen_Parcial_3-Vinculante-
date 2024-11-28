#include "tarea.h"
#include <string>
using namespace std;

tarea::tarea (string id, string descripcion, int duracion)
{
    this -> id = id;
    this -> descripcion = descripcion;
    this -> duracion = duracion;
}

string tarea::getId ()
{
    return id;
}

string tarea::getDescripcion ()
{
    return descripcion;
}

int tarea::getDuracion ()
{
    return duracion;
    return 0;
}

string tarea::toString ()
{
    return "Tarea (" + id + "): " + descripcion + " tiene una duracion de " + to_string (duracion) + " minutos.";
    return "Detalles de Tarea";
}