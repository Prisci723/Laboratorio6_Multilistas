#include "Lista Estudiantes.cpp"
    ListaEstudiantes * pEst = new ListaEstudiantes;


int main(){

    pEst->iniciar();
    NodoEstudiante estudiante1 = NodoEstudiante("123", "Priscila", "Suipacha 288", Femenino);
    NodoEstudiante *ptr1 = new NodoEstudiante;

    ptr1 = &estudiante1;
    pEst->insertar_delante(ptr1);
    pEst->MostrarUno(ptr1);


    

    return 0;
}