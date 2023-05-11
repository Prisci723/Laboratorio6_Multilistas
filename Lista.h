#pragma once
#include "NodoAsignatura.h"

class Lista{
public:
    Nodo *primero, *ultimo;

    Lista();
    ~Lista();

    bool esta_vacia();
    void iniciar();

    virtual void insertar_delante(Nodo* p);
    virtual void insertar_detras(Nodo* p);

    Nodo* getPrimero(){
        return primero;
    }
    Nodo* getUltimo(){
        return ultimo;
    }
    Nodo *getSiguienteValor(Nodo* p);

    int Cantidad_asignaturas = 0;
    void error();
    void mostrar_un_estudiante(NodoEstudiante * e);
    void Lineas();

};