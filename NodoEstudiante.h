#pragma once
#include "Nodo.h"
#include <iostream>
using std::string;

enum Genero{Masculino, Femenino}; 

class NodoEstudiante: public Nodo{
    private:
    string codigo, nombre, direccion;
    Genero genero;
    public:
    NodoEstudiante();
    NodoEstudiante(string c, string n, string d, Genero g);
    ~NodoEstudiante();

    void setNombre(string n){
        nombre = n;
    }
    void setCodigo(string c){
        codigo = c;
    }
    void setDireccion(string d){
        direccion = d;
    }
    void setGenero(Genero g){
        genero = g;
    }
    string getNombre(){
        return nombre;
    }
    string getCodigo(){
        return codigo;
    }
    string getDireccion(){
        return direccion;
    }
    Genero getGenero(){
        return genero;
    }

   NodoEstudiante *getSiguienteNodo() override;
    NodoEstudiante *getAnteriorNodo() override;
    string verGenero();
};