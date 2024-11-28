#include <iostream>
#include <string>
#include "tarea.h"
using namespace std;

int main ()
{
    tarea ta ("A", "Reserva de vuelo", 20);
    tarea tb ("B", "Informar a casa para empacar", 5);
    tarea tc ("C", "Empacar maletas", 40);
    tarea td ("D", "Preparacion del billete por la agencia", 10);
    tarea te ("E", "Recoger el billete de la agencia", 5);
    tarea tf ("F", "Llevar el billete a la oficina", 10);
    tarea tg ("G", "Recoger las maletas de casa", 20);
    tarea th ("H", "Llevar las maletas a la oficina", 25);
    tarea ti ("I", "Conversacion sobre documentos requeridos", 35);
    tarea tj ("J", "Dictar instrucciones para ausencia", 25);
    tarea tk ("K", "Reunir documentos", 15);
    tarea tl ("L", "Organizar documentos", 5);
    tarea tm ("M", "Viajar al aeropuerto y facturar", 25);

    ta.mostrarTarea ();
}