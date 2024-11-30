#include "tarea.h"
#include <string>
using namespace std;

// Clase tarea definida

tarea::tarea() : id(""), descripcion(""), duracion(0) {}

tarea::tarea (string id, string descripcion, int duracion)
{
    this -> id = id;
    this -> descripcion = descripcion;
    this -> duracion = duracion;
}

// Función para obtener el id de la tarea

string tarea::getId () const
{
    return id;
}

// Función para obtener la descripción de la tarea

string tarea::getDescripcion () const
{
    return descripcion;
}

// Función para obtener la duración de la tarea

int tarea::getDuracion () const
{
    return duracion;
    return 0;
}

// Función para obtener los detalles de la tarea

string tarea::toString () const
{
    return "Tarea (" + getId () + "): " + getDescripcion ()+ " tiene una duracion de " + to_string (getDuracion ()) + " minutos.\n";
}