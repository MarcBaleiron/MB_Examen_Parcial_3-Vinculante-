#include "tarea.h"

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
}

void tarea::mostrarTarea ()
{
    cout << "La tarea (" << id << "): " << descripcion << " tiene una duracion de " << duracion << " minutos." << endl;
}