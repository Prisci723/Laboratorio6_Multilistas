#include "Lista Asignaturas.h"
#include "Lista Estudiantes.cpp"
using std::cout;
using std::endl;


void ListaAsignaturas::insertar_delante(Nodo * nodo){
        if(esta_vacia()){
        primero = nodo;
        ultimo = nodo;
       // ultimo->siguiente = NULL;
      ultimo->siguiente = primero;
    }
    else{
        nodo->siguiente = primero;
        primero = nodo;
    }
    Cantidad_asignaturas++;
    return;

}

void ListaAsignaturas::insertar_detras(Nodo * nodo){
         if(esta_vacia()){
        primero = nodo;
        ultimo = nodo;
        //ultimo->siguiente = NULL;
        ultimo->siguiente = primero;
    }
    else{
            ultimo->siguiente = nodo;
            ultimo = nodo;
           nodo->siguiente = primero;
    }
    Cantidad_asignaturas++;
    return;

}

bool ListaAsignaturas::existe_asignatura(string cod){
    NodoAsignatura * exist = NULL;
    if(esta_vacia()){
            Lista::error();
        return false;
    }
    else{
       NodoAsignatura * traveser = (NodoAsignatura*)primero;
            for(int i=0; i< Cantidad_asignaturas; i++){
                              if(cod == traveser->getCodigo()){
                exist = traveser;
                 }
                traveser = traveser->getSiguienteNodo(); 
            }    
        if(exist != NULL){
                return true;
            }
            else{
                Lista::error();
                return false;
            }
    }

}



NodoAsignatura* ListaAsignaturas::Asignatura_resultado(string cod){
        NodoAsignatura * traveser = (NodoAsignatura*)primero;
        if(existe_asignatura(cod)){
            for(int i=0; i< Cantidad_asignaturas; i++){
                if(cod == traveser->getCodigo()){
                  return traveser;
            }
            traveser = traveser->getSiguienteNodo();           
        }
        }
        return nullptr;
    }

    void ListaAsignaturas::mostrarUno(NodoAsignatura * traveser){
            if(esta_vacia()){
                Lista::error();
        getchar();
        return;
    }
    else{
        cout<<"Codigo de la asignatura: "<<traveser->getCodigo()<<"\n";
        cout<<"Descripcion de la asignatura: "<<traveser->getDescripcion()<<"\n";
    }
    }



     void ListaAsignaturas::mostrar_asignaturas_numero(){
            NodoAsignatura * traveser = new NodoAsignatura; 
            traveser = (NodoAsignatura*)primero;
            for(int i=0; i< Cantidad_asignaturas; i++){
                 mostrarUno(traveser);
                               Lista::Lineas();
                traveser = traveser->getSiguienteNodo(); 
            }
     }
    



         void ListaAsignaturas::mostrarEstudiantes_inscritos(string cod){
                if(esta_vacia()){
                     Lista::error();
                     return;
              }
            else{
                NodoEstudiante * estudiante;
                NodoAsignatura * p;
                
                p = Asignatura_resultado(cod);
                estudiante = p->getPrimerEstudiante();
                int i = 0;
                do{
                    cout<<i+1<<endl;
                    mostrar_un_estudiante(estudiante);
                estudiante=estudiante->getSiguienteNodo();
                    i++;
                }while(estudiante!=NULL);
            }
         }

     void ListaAsignaturas::mostrarTodo(){
            NodoAsignatura * traveser = new NodoAsignatura; 
            traveser = (NodoAsignatura*)primero;
            for(int i=0; i<Cantidad_asignaturas; i++){
                mostrarUno(traveser);
                Lista::Lineas();
                mostrarEstudiantes_inscritos(traveser->getCodigo());
                  Lista::Lineas();
             traveser = traveser->getSiguienteNodo();           
            }
     }
/*
     void ListaAsignaturas::Inscribir_estudiante(NodoAsignatura * a, NodoEstudiante * e){
            if(a->getPrimerEstudiante()==NULL){
            e->siguiente = a->getPrimerEstudiante();
            a->pEstudiante = e;
            }
            else{
              e->anterior = a->getPrimerEstudiante();
            e->siguiente = a->getPrimerEstudiante();
            a->pEstudiante = e;          
            }
       if(existe_asignatura(a->getCodigo())){
    }
        else{
            cout<<"No se pudo inscribir al estudiante, debido a que la asignatura no existe"<<endl;
        }
 
     */