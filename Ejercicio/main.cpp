#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "tarea.h"
#include "actor.h"
using namespace std;

// Función principal en la que se ejecuta el programa

int main ()
{
// Creación de las tareas con sus valores por medio de un mapa

map <char, tarea> tareas =
{
    {'A', tarea ("A", "Reserva de vuelo", 20)},
    {'B', tarea ("B", "Informar a casa para empacar", 5)},
    {'C', tarea ("C", "Empacar maletas", 40)},
    {'D', tarea ("D", "Preparacion del billete por la agencia", 10)},
    {'E', tarea ("E", "Recoger el billete de la agencia", 5)},
    {'F', tarea ("F", "Llevar el billete a la oficina", 10)},
    {'G', tarea ("G", "Recoger las maletas de casa", 20)},
    {'H', tarea ("H", "Llevar las maletas a la oficina", 25)},
    {'I', tarea ("I", "Conversacion sobre documentos requeridos", 35)},
    {'J', tarea ("J", "Dictar instrucciones para ausencia", 25)},
    {'K', tarea ("K", "Reunir documentos", 15)},
    {'L', tarea ("L", "Organizar documentos", 5)},
    {'M', tarea ("M", "Viajar al aeropuerto y facturar", 25)}
};

// Función para imprimir las tareas

    cout << "Tareas a completar en menos de 100 min: \n";
    for (auto& pair : tareas)
    {
        cout << pair.second.toString () << "\n";
    }

// do-while para que el usuario añada los actores y las tareas asignadas a cada uno

    bool pregunta_actor = true;
    char respuesta_actor;
    vector <actor> actores;

    do
    {
        cout << "\nDesea añadir un actor? (s/n): ";
        cin >> respuesta_actor;

        // try-catch para asegurarse de que el input del usuario es válido

        try
        {
            if (toupper (respuesta_actor) != 'S' && toupper (respuesta_actor) != 'N')
            {
                throw invalid_argument ("Respuesta no valida. Por favor, introduzca 'S' o 'N'.");
            }
            if (toupper (respuesta_actor) == 'N')
            {
                cout << "No se añadiran mas actores.\n";
                pregunta_actor = false;
            }
            if (toupper (respuesta_actor) == 'S')
            {
                bool pregunta_tarea = true;
                string nombre;
                char respuesta_tarea;

                cout << "Introduzca el nombre del actor: ";
                cin >> nombre;

                actor i (nombre);
                actores.push_back (i);

                // do-while para que el usuario añada las tareas asignadas a cada actor

                do
                {
                    cout << "Desea introducir una tarea para el actor? (s/n): \n";
                    cin >> respuesta_tarea;

                    // try-catch para asegurarse de que el input del usuario es válido

                    try
                    {
                        if (toupper (respuesta_tarea) != 'S' && toupper (respuesta_tarea) != 'N')
                        {
                            throw invalid_argument ("Respuesta no valida. Por favor, introduzca 'S' o 'N'.");
                        }
                        if (toupper (respuesta_tarea) == 'N')
                        {
                            cout << "No se añadiran mas tareas.\n";
                            pregunta_tarea = false;
                        }
                        if (toupper (respuesta_tarea) == 'S')
                        {
                            char id_res;
                            cout << "Introduzca el id (A-M) de la tarea: ";
                            cin >> id_res;

                            id_res = toupper (id_res);
                            if (tareas.find (id_res) != tareas.end ())
                            {
                                actores.back ().addTarea (tareas [id_res]);
                            }
                            else
                            {
                                throw invalid_argument ("Tarea no valida.");
                            }
                        }
                    }
                    catch (const invalid_argument& e)
                    {
                        cout << e.what () << endl;
                    }
                } while (pregunta_tarea);
            }
        }
        catch (const invalid_argument& e)
        {
            cout << e.what () << endl;
        }
    } while (pregunta_actor);

    // Función en la que se imprimen los actores creados, las tareas y el tiempo total para completarlas

    int duracion_total = 0;
    for (const auto& actor : actores)
    {
        cout << actor.resultado () << "\n";

        for (int i = 0; i < actor.getNumTareas (); i++)
        {
            duracion_total += actor.getTarea (i).getDuracion ();
        }
    }

    // Condicionales para determinar si el ejecutivo llegará a tiempo o no

    if (duracion_total <= 100)
    {
        cout << "Bien hecho! Todas las tareas han sido completadas en menos de 100 min.";
    }
    else if (duracion_total > 100)
    {
        cout << "Lo siento, de esa manera el ejecutivo no podra llegar a tiempo ya que para terminar todas las tareas hacen falta mas de 100 min.";
    }

    return 0;
}