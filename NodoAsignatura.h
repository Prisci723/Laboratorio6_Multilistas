#pragma once
#include "NodoEstudiante.h"

class NodoAsignatura: public Nodo{
    private:
    string codigo, descripcion;
    public:
    NodoEstudiante *pEstudiante;
    NodoAsignatura();
    NodoAsignatura(string c, string d);
    ~NodoAsignatura();

    void setCodigo(string c){
        codigo = c;
    }
    void setDescripcion(string d){
        descripcion = d;
    }

    NodoEstudiante* getPrimerEstudiante(){
        return pEstudiante;
    }
    void setPrimerEstudiante(NodoEstudiante * e){
        pEstudiante = e;
    }
    string getCodigo(){
        return codigo;
    }
    string getDescripcion(){
        return descripcion;
    }
    NodoAsignatura* getSiguienteNodo() override;
};