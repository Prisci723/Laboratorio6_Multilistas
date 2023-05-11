#include "Lista.h"
#include "NodoAsignatura.cpp"
using std::cout;
using std::endl;

Lista::Lista(){
    primero = NULL;
    ultimo =NULL;
}

Lista::~Lista(){

}

void Lista::iniciar(){
    primero = nullptr;
    ultimo = nullptr;
}

bool Lista::esta_vacia(){
    if(primero == nullptr){
        return true;
    }
    else 
        return false;
}

void Lista::insertar_delante(Nodo * nodo1){
    if(esta_vacia()){
        primero = nodo1;
        ultimo = nodo1;
        ultimo->siguiente = NULL;
        primero->anterior = NULL;
      // ultimo->siguiente = primero;
    }
    else{
        nodo1->siguiente = primero;
        primero->anterior = nodo1;
        primero = nodo1;
        nodo1->anterior = NULL;
    }
    return;
}

void Lista::insertar_detras(Nodo * nodo1){
     if(esta_vacia()){
        primero = nodo1;
        ultimo = nodo1;
        ultimo->siguiente = NULL;
        primero->anterior = NULL;
        //ultimo->siguiente = primero;
    }
    else{
        ultimo->siguiente = nodo1;
        nodo1->anterior = ultimo;
        ultimo = nodo1;
        nodo1->siguiente = NULL;
           //nodo1->siguiente = primero;
    }
    return;
}

Nodo* Lista::getSiguienteValor(Nodo * p){
    if(esta_vacia()){
        return nullptr;
    }
    else{
       return p->getSiguienteNodo();
    }
}

void Lista::error(){
    cout<<"Error, no existe el elemento"<<endl;
}

         void Lista::mostrar_un_estudiante(NodoEstudiante * e){
             cout<<"Nombre del estudiante: "<<e->getNombre()<<"\n";
             cout<<"Codigo del estudiante: "<<e->getCodigo()<<"\n";
             cout<<"Direccion del estudiante: "<<e->getDireccion()<<"\n";
             cout<<"Genero: "<<e->verGenero()<<"\n";
         }
void Lista::Lineas(){
    cout<<"------------------------------------------------"<<endl;
}
/*Nodo* Lista::getAnteriorValor(Nodo * p){
        if(esta_vacia()){
        return nullptr;
    }
        else if(p == primero){
            return nullptr;
        }

        else{
            Nodo * q = nullptr;
            q = primero;
            while(q->siguiente!=p){
                q=q->siguiente;
                return q;
            }
        }
}*/
