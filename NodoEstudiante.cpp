#include "NodoEstudiante.h"
#include "Nodo.cpp"

NodoEstudiante::NodoEstudiante(): Nodo::Nodo(){
    this->codigo = "";
    this->nombre = "";
    this->direccion = "";
    this->genero = Femenino;
    this->anterior=NULL;
}

NodoEstudiante::NodoEstudiante(string c, string n, string d, Genero g){
    this->codigo = c;
    this->nombre = n;
    this->direccion = d;
    this->genero = g;
    this->anterior=NULL;
}

NodoEstudiante::~NodoEstudiante(){

}

NodoEstudiante* NodoEstudiante::getSiguienteNodo()
{
	return (NodoEstudiante*)Nodo::getSiguienteNodo();
}

NodoEstudiante* NodoEstudiante::getAnteriorNodo()
{
	return (NodoEstudiante*)Nodo::getAnteriorNodo();
}

string NodoEstudiante::verGenero(){
            switch (genero)
        {
        case Masculino:
            return "Masculino";
        case Femenino:
            return "Femenino";
        default:
            return " ";
            break;
        }
}
