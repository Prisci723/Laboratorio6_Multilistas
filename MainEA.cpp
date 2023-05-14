
#include "Lista Asignaturas.cpp"
using std::cin;
using std::endl;

ListaEstudiantes *pEst = new ListaEstudiantes;
ListaAsignaturas *pLA = new ListaAsignaturas;

void Insertar_asignatura(string c, string d, int i){

    NodoAsignatura* Asignatura1 =  new NodoAsignatura;

    Asignatura1->setCodigo(c);
    Asignatura1->setDescripcion(d);

    switch(i){
        case 1:
            pLA->insertar_delante(Asignatura1);
        break;
        case 2:
            pLA->insertar_detras(Asignatura1);
        break;
        default:
        break;
    }
}
void Insertar_estudiante(string n, string c, string d, char g, string cod){
    NodoEstudiante* Estudiante1 =  new NodoEstudiante;
    NodoAsignatura * asignatura_asignada;

    Estudiante1->setNombre(n);
    Estudiante1->setCodigo(c);
    Estudiante1->setDireccion(d);
                    if(g == 'f'|| g == 'F'){
                    Estudiante1->setGenero(Femenino);                     
                    }
                    else if(g == 'm'|| g == 'M'){
                    Estudiante1->setGenero(Masculino);        
                    }
        asignatura_asignada = pLA->Asignatura_resultado(cod);
        pEst->Inscribir_estudiante(asignatura_asignada, Estudiante1);
}

void mostrar_estudiantes_asignatura(string cod){
            pLA->mostrarEstudiantes_inscritos(cod);
}

void mostrar_todas_lista_asignaturas(){
    pLA->mostrar_asignaturas_numero();
}

void mostrar_todo(){
    pLA->mostrarTodo();
}

NodoAsignatura * buscar_asignatura(string cod){
    NodoAsignatura * asig = pLA->Asignatura_resultado(cod);
    return asig;
}
void buscar_estudiante(string cod_asig, string nomb){
    pEst->BuscarEstudiante(nomb, buscar_asignatura(cod_asig));
}

void eliminar_estudiante(string cod_asig, string nomb){
     pEst->Eliminar_estudiante(nomb, buscar_asignatura(cod_asig)); 
}

void genero_estudiante(string cod, char g){
     switch(g){
        case 'f': case 'F':
            cout<<"La cantidad de estudiantes de genero femenino es de: "<<pEst->Cantidad_genero(buscar_asignatura(cod), g); 
        break;
            case 'm': case 'M':
              cout<<"La cantidad de estudiantes de genero masculino es de: "<<pEst->Cantidad_genero(buscar_asignatura(cod), g);           
        break;
        default:
        break;
     }
}

void mostrar_estudiante_anterior(string cod_asig, string nomb){
       pEst->Mostrar_anterior(nomb, buscar_asignatura(cod_asig));
}

void cantidad_est(string cod){
   cout<<"Cantidad de estudiantes de la materia "<<cod<<": "<<pEst->Cantidad_estudiantes(buscar_asignatura(cod))<<"\n";
}

void cantidad_asign(){
   cout<<"Cantidad total de asignaturas en la lista: "<<pLA->Cantidad_asignaturas<<"\n";
}

/*

}*/
/*






void Insertar_estudiante(string n, string c, string d, char g, int i){
    NodoEstudiante* Estudiante1 =  new NodoEstudiante;
    Estudiante1->setNombre(n);
    Estudiante1->setCodigo(c);
    Estudiante1->setDireccion(d);
                    if(g == 'f'|| g == 'F'){
                    Estudiante1->setGenero(Femenino);                     
                    }
                    else if(g == 'm'|| g == 'M'){
                    Estudiante1->setGenero(Masculino);        
                    }
    switch(i){
        case 1:
            pEst->insertar_delante(Estudiante1);
        break;
        case 2:
            pEst->insertar_detras(Estudiante1);
        break;
        default:
        break;
    }
}
*/


int main(){
 /* pLA->iniciar();
   NodoAsignatura estudiante1 = NodoAsignatura();

    //NodoAsignatura es = NodoAsignatura("MAT100", "Algebra");
    ptr1->setCodigo("MAT101");
    ptr1->setDescripcion("Calculo 1");
    pLA->insertar_delante(ptr1);
    ptr1->setCodigo("MAT100");
    ptr1->setDescripcion("Alegebra 1");
    pLA->insertar_delante(ptr1);


funciona ok:

    pLA->mostrarTodo();
     Insertar_estudiante("123","Priscila","Suipacha288", Femenino, "MAT100");

         NodoEstudiante *ptr2 = new NodoEstudiante;
     NodoEstudiante Estudiante2 = NodoEstudiante("100","mili","Suipacha288", Femenino);
        ptr2 = &Estudiante2;
    pEst->insertar_delante(ptr2);
    Insertar_estudiante("Felipe", "121", "Suipacha288", 'm', "MAT101");
    Insertar_estudiante("Priscila", "224", "Suipacha288", 'f', "MAT101");
    Insertar_estudiante("Mili", "784", "Suipacha288", 'f', "MAT100");
    Insertar_asignatura("MAT101","Calculo 1", 1);
    Insertar_asignatura("MAT100","Alegebra 1", 1);
       buscar_estudiante("MAT100", "121");
    buscar_estudiante("MAT101", "121");
    cantidad_asign();
    cantidad_est("MAT108");
    cantidad_est("MAT101");


       / NodoEstudiante *ptr2 = new NodoEstudiante;
    ptr2 = &Estudiante1;
    pEst->MostrarUno(ptr2);
   ;*/  
    // NodoEstudiante Estudiante1 = NodoEstudiante("","Suipacha288", Femenino);    ptr2 = &Estudiante1;
   // pLA->mostrarTodo();
   // mostrar_todo();
    // pEst->Mostrar_todos_estudiantes();
    //Insertar_estudiante(,   'f', 1);
    int opc, i;
    string c, d, n, cod;
    char g;
			
		do
		{


			cout << "              LISTA DE ASIGNATURAS" << endl;
			cout << "      Seleccione la opcion a realizar\n\n";
            cout<<"********************Menu asignaturas: ****************************\n";
			cout << "      1.- Insertar una asignatura por delante\n";
			cout << "      2.- Insertar una asignatura por atras\n";
			cout << "      3.- Mostrar toda la lista de asignaturas\n";
			cout << "      4.- Mostrar cantidad de asignaturas\n";
            cout<<"********************Menu estudiantes: ****************************\n";
			cout << "      5.- Insertar un estudiante\n";
			cout << "      6.- Mostrar todos los estudiantes de una asignatura\n";
  			cout << "      7.- Buscar un estudiante dentro de una asignatura\n";      
 			cout << "      8.- Mostrar el total de estudiantes por genero\n";
			cout << "      9.- Eliminar un estudiante\n";
  			cout << "      10.- Mostrar un estudiante anterior\n";                     
			cout << "      11.- Mostrar toda la multilista\n";
			cout << "      12.- Salir";
			cout << "       \n\n\nOpcion(1-12): ";

			cin >> opc;

			switch (opc)
			{
			case 1:
                c = d ="";
                cout<<"Ingrese el codigo de la asignatura: "<<endl; cin>>c;
                cout<<"Ingrese la descripcion de la asignatura: "; cin>>d;
				Insertar_asignatura(c, d, 1);
                    getchar();
				break;
			case 2:
                c = d ="";
                cout<<"Ingrese el codigo de la asignatura: "<<endl; cin>>c;
                cout<<"Ingrese la descripcion de la asignatura: "; cin>>d;
				Insertar_asignatura(c, d, 2);
                    getchar();
				break;
			case 3:
				mostrar_todas_lista_asignaturas();
                getchar();
				break;
			case 4:
                    cantidad_asign();
                    getchar();
				break;
			case 5:
                c = d =n = "";
                g=' ';
                cod = "";
                cout<<"Ingrese el nombre del estudiante: "; cin>>n;
                cout<<"Ingrese el codigo del estudiante: "; cin>>c;
                cout<<"Ingrese la direccion del estudiante: "; cin>>d;
                cout<<"Ingrese el genero del estudiante m masculino, f femenino: "; cin>>g;
                cout<<"Ingrese el codigo de la asginatura a la que pertenece el estudiante"; cin>>cod;
                Insertar_estudiante(n, c, d, g, cod);
                    getchar();
                    break;
			case 6:
                cod = " ";
                cout<<"Ingrese el codigo de la asginatura de la que desea ver la lista de estudiantes: "; cin>>cod;
                mostrar_estudiantes_asignatura(cod);
                    getchar();
				break;
			case 7:
                 c = cod = "";
                cout<<"Ingrese el codigo de la asginatura de la que desea buscar el estudiante: "; cin>>cod;
                cout<<"Ingrese el codigo del estudiante al que desea buscar: "; cin>>c;
                buscar_estudiante(cod, c);
				break;

			case 8:
                cod = " ";
                g=' ';
                cout<<"Ingrese el codigo de la asginatura de la que desea ver la cantidad de estudiantes por genero: "; cin>>cod;
                cout<<"Ingrese el genero de los estudiantes de los que desea ver la cantidad: "; cin>>g;
                genero_estudiante(cod, g);           
				break;
			case 9:
                c = cod = "";
                cout<<"Ingrese el codigo de la asginatura de la que desea eliminar a un estudiante: "; cin>>cod;
                cout<<"Ingrese el codigo del estudiante al que desea eliminar: "; cin>>c;
                eliminar_estudiante(cod, c);
				break;
			case 10:
                c = cod = "";
                cout<<"Ingrese el codigo de la asginatura de la que desea mostrar un estudiante anterior: "; cin>>cod;
                cout<<"Ingrese el codigo del estudiante al que desea buscar el anterior: "; cin>>c;
                mostrar_estudiante_anterior(cod, c);
				break;
			case 11:
                mostrar_todo();
				break;
			case 12:
				exit(0);
				break;

			}
		} 	while ((opc != 12));


    return 0;
}
/*

			cout << "      6.- Eliminar la primera asignatura\n";
			cout << "      7.- Eliminar la ultima asignatura\n";*/