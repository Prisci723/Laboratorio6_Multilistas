#pragma once
class Nodo{
    public: 
        Nodo* siguiente, * anterior;

        Nodo();
        ~Nodo();

        virtual Nodo* getSiguienteNodo(){
            return siguiente;
        };
        virtual Nodo* getAnteriorNodo(){
            return anterior;
        };
};