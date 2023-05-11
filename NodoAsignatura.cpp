#include "NodoAsignatura.h"
#include "NodoEstudiante.cpp"

NodoAsignatura::NodoAsignatura(): Nodo::Nodo(){
    this->codigo = "";
    this->descripcion = "";
    //this->cantidad = 0;
    this->pEstudiante = NULL;
    }

NodoAsignatura::NodoAsignatura(string c, string d): Nodo::Nodo(){
    this->codigo = c;
    this->descripcion = d;
  // , int cant this->cantidad = cant;
    this->pEstudiante =  NULL;
    }

NodoAsignatura::~NodoAsignatura(){

}

NodoAsignatura* NodoAsignatura::getSiguienteNodo()
{
	return (NodoAsignatura* )Nodo::getSiguienteNodo();
}
