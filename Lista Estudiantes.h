#pragma once
#include "Lista.h"

class  ListaEstudiantes : public Lista{
    public:
    void BuscarEstudiante(string cod, NodoAsignatura *a);
    void Eliminar_estudiante(string cod, NodoAsignatura *a);
    void Mostrar_anterior(string cod, NodoAsignatura *a);
    NodoEstudiante* resultado_estudiante(string cod, NodoAsignatura *a);
    int Cantidad_genero(NodoAsignatura * a, char g);

    void Mostrar_todos_estudiantes();
    void Inscribir_estudiante(NodoAsignatura * p, NodoEstudiante * e);
    Nodo* getAnteriorValor(Nodo*p);
    int Cantidad_estudiantes(NodoAsignatura * a);
};