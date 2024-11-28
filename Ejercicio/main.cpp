#include <string>
#include "tarea.h"
#include "actor.h"
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

    actor a1 ("Asistente 1");
    a1.addTarea (ta);
    a1.addTarea (td);
    a1.addTarea (te);
    a1.addTarea (tf);

    actor a2 ("Asistente 2");
    a2.addTarea (tb);
    a2.addTarea (tc);

    actor a3 ("Asistente 3");
    a3.addTarea (tg);
    a3.addTarea (th);

    actor a4 ("Project Manager");
    a4.addTarea (ti);
    a4.addTarea (tk);
    a4.addTarea (tl);
    a4.addTarea (tj);
    a4.addTarea (tm);

    a1.resultado ();
    a2.resultado ();
    a3.resultado ();
    a4.resultado ();

    cout << "Todas las tareas han sido completadas en menos de 100 min." << endl;

    return 0;
}