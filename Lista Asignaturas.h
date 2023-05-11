#pragma once
#include "Lista Estudiantes.h"

class ListaAsignaturas: public Lista{
    public:
    void Total_mujeres();
    void Total_varones();
    bool existe_asignatura(string cod);
    void Eliminar_Asignatura(string cod);
    NodoAsignatura * Asignatura_resultado(string cod);
     virtual void insertar_delante(Nodo* p) override;
    virtual void insertar_detras(Nodo* p) override;


    void mostrarUno(NodoAsignatura * p);
    void mostrarTodo();
    void mostrarEstudiantes_inscritos(string cod);
    //void Inscribir_estudiante(NodoAsignatura * p, NodoEstudiante * e);
    void mostrar_asignaturas_numero();
};