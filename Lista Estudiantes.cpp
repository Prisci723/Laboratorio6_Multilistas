#include "Lista Estudiantes.h"
#include "Lista.cpp"
using std::cout;

         void ListaEstudiantes::Inscribir_estudiante(NodoAsignatura * a, NodoEstudiante * e){
            if(a->getPrimerEstudiante()==NULL){
            e->siguiente = a->getPrimerEstudiante();
            a->pEstudiante = e;
            }
            else{
              e->anterior = a->getPrimerEstudiante();
            e->siguiente = a->getPrimerEstudiante();
            a->pEstudiante = e;     
            }
            return;
     }
       /*if(existe_asignatura(a->getCodigo())){
    }
        else{
            cout<<"No se pudo inscribir al estudiante, debido a que la asignatura no existe"<<endl;
    
    void ListaEstudiantes::insertar_delante(Nodo* nodo1){
        if(esta_vacia()){
        //*asignat->getPrimerEstudiante() = *Primer_estudiante_asignatura();
        primero = nodo1;
        ultimo = nodo1;
        ultimo->siguiente = NULL;
        primero->anterior = NULL;
    }
    else{
      // *asignat->getPrimerEstudiante() = *Primer_estudiante_asignatura();
        nodo1->siguiente = primero;
        primero->anterior = nodo1;
        primero = nodo1;
        nodo1->anterior = NULL;
    }
    return;
    }
    void ListaEstudiantes::insertar_detras(Nodo* nodo1){
        if(esta_vacia()){
        primero = nodo1;
        ultimo = nodo1;
        ultimo->siguiente = NULL;
        primero->anterior = NULL;
    }
    else{
        ultimo->siguiente = nodo1;
        nodo1->anterior = ultimo;
        ultimo = nodo1;
        nodo1->siguiente = NULL;
    }
    return;
    }
        }*/   
    
  
    Nodo* ListaEstudiantes::getAnteriorValor(Nodo*p){
       return p->getAnteriorNodo();
    }
    void ListaEstudiantes::Mostrar_todos_estudiantes(){
        if(esta_vacia()){
                     cout<<"La lista esta vacia"<<"\n";
                     getchar();
                     return;
              }
            else{
                NodoEstudiante * traveser;
                traveser = (NodoEstudiante*)primero;
                while(traveser!=NULL){
                    traveser = traveser->getSiguienteNodo();
                }
    }
    }

    int ListaEstudiantes::Cantidad_estudiantes(NodoAsignatura * a){
        int Cantidad = 0;
                NodoEstudiante * traveser;
                traveser = a->getPrimerEstudiante();
                    while(traveser!=NULL){
                    Cantidad++;
                    traveser = traveser->getSiguienteNodo();
                    }
        return Cantidad;
    }

    NodoEstudiante* ListaEstudiantes::resultado_estudiante(string cod, NodoAsignatura* a){
                     NodoEstudiante * traveser;
                traveser = a->getPrimerEstudiante();
                    while(traveser!=NULL){
                        if(cod == traveser->getCodigo()){
                            return traveser;
                        }
                    traveser = traveser->getSiguienteNodo();
                    }
        return nullptr;
    }

    void ListaEstudiantes::BuscarEstudiante(string cod, NodoAsignatura* a){
        NodoEstudiante * est = resultado_estudiante(cod, a);

        if(est == nullptr){
            Lista::error();
        }
        else{
            mostrar_un_estudiante(est);
        }
    }

    void ListaEstudiantes::Eliminar_estudiante(string cod, NodoAsignatura*a){

              NodoEstudiante * est = resultado_estudiante(cod, a);
              NodoEstudiante * izq, *der;
        if(est == nullptr){
            Lista::error();
        }
        else{
           if(est == a->getPrimerEstudiante()){
                Lista::iniciar();
           }
           else{
                est->anterior=izq;
                est->siguiente=der;
                izq->siguiente = der;
                der->anterior = izq;
                delete est;
           }
        }
    }
    void ListaEstudiantes::Mostrar_anterior(string cod, NodoAsignatura*a){

              NodoEstudiante * est = resultado_estudiante(cod, a);
        if(est == nullptr){
            Lista::error();
        }
        else{
           if(est == a->getPrimerEstudiante()){
                Lista::error();
           }
           else{
                est = est->getAnteriorNodo();
                Lista::mostrar_un_estudiante(est);
           }
        }
    }

    int ListaEstudiantes::Cantidad_genero(NodoAsignatura * a, char g){
        NodoEstudiante * est = a->getPrimerEstudiante();
        int cantidad = 0;
        switch(g){
            case 'f': case 'F':
                do{
                    if(est->getGenero() == Femenino){
                        cantidad++;
                    }
                   est= est->getSiguienteNodo(); 
                }while(est!=NULL);
            break;
            case 'm': case 'M':
                do{
                    if(est->getGenero() == Masculino){
                        cantidad++;
                    }
                   est= est->getSiguienteNodo(); 
                }while(est!=NULL);
            break;
            default: 
            break;
        }

        return cantidad;
    }


    

