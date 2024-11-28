#include "tarea.h"
#include <string>
using namespace std;

// Clase tarea definida

tarea::tarea (string id, string descripcion, int duracion)
{
    this -> id = id;
    this -> descripcion = descripcion;
    this -> duracion = duracion;
}

// Función para obtener el id de la tarea

string tarea::getId ()
{
    return id;
}

// Función para obtener la descripción de la tarea

string tarea::getDescripcion ()
{
    return descripcion;
}

// Función para obtener la duración de la tarea

int tarea::getDuracion ()
{
    return duracion;
    return 0;
}

// Función para obtener los detalles de la tarea

string tarea::toString ()
{
    return "Tarea (" + getId () + "): " + getDescripcion ()+ " tiene una duracion de " + to_string (getDuracion ()) + " minutos.";
}