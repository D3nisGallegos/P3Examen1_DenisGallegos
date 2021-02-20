#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Liga.hpp"
#include "Tabla.hpp"
#include "Equipo.hpp"
#include "Puntos.hpp"
#include "Partido.hpp"


using namespace std; 

int main(int argc, char** argv) {
	
	
	cout << "CREE UNA LIGA: " <<endl; 
	cout << "Ingrese el nombre: " <<endl; 
	string name = ""; 
	cin.ignore();
	getline(cin, name);
	Liga* liga = new Liga();
	liga.SETnombre(name);
	Tabla tabla = new Tabla();
	liga.SETtablita(tabla);
	int opcion = 0;
	while (opcion != 5){
		cout << "PROGRAMA DE FUTSALA: " <<endl; 
		cout << "1) Mantenimiento." <<endl ;
		cout << "2) Generar jornada." <<endl; 
		cout << "3) Simular partidos." <<endl; 
		cout << "4) Tabla de posiciones. " <<endl; 
		cout << "5) salir. "
		cout << "Ingrese la opcion: " <<endl; 
		cin >> opcion; 
		switch(opcion){
			case 1:
				{
				int opcion2 = 0; 
				while (opcion2 == 4){
					cout << "MANTENIMIENTO: " <<endl; 
					cout << "1) Crear." <<endl; 
					cout << "2) Modificar. " <<endl; 
					cout << "3) Eliminar" <<endl;
					cout << "4) Salir. " <<endl; 
					cout << "Ingrese la opcion: " <<endl;
					cin >> opcion2; 
					switch (opcion2){
						case 1:
							{
							cout << "CREAR: " <<endl; 
							cout << "Ingrese el nombre: " <<endl; 
							string nombre = ""; 
							cin.ignore();
							getline(cin, nombre);
							Equipo objeto = new Equipo(nombre);
							liga.GETequipos().push_back(objeto);
							Puntos* punto = new Puntos(); 
							punto.SETequipo(objeto);
							liga.GETtablita.GETpuntos().push_back(punto);
							break; 
							}//Fin del caso 1. 
						case 2:
							{
							cout << "MODIFICAR: " <<endl; 
							cout << "Ingrese el nuevo nombre del equipo a modificar: " <<endl; 
							string nombre; 
							cin.ignore();
							getline(cin, nombre);
							int elem = 0;
							for (int c =0; c < liga.GETequipos().size();c++){
								Equipo equip = liga.GETequipos() [c];
								string n = equip.GETnombre();
								if (nombre = n){
									cout << "Ingrese el nuevo nombre del equipo: " <<endl;
									string nuevo;
									cin.ignore();
									getline(cin, nuevo);
									elem = c;
									equip.SETnombre(nuevo);
									liga.GETequipos().insert(elem, equip);
									Puntos* punt = new Puntos();
									punt.SETequipo(equip);
									liga.GETtablita().GETpuntos().insert(elem, punt);
								}
							}
							cout << "Nombre modificado correctamente." <<endl;
							int op = 0;
							while (opcion != 2){
								cout << "1) modificar skill tambien." <<endl; 
								cout << "2) salir." <<endl;
								cin >> op; 
								if (op == 1){
									Equipo equi = new Equipo(); 
									equi.SETnombre(nuevo);
									liga.GETequipos().insert(elem, equi);
									Puntos* punt = new Puntos();
									punt.SETequipo(equi);
									liga.GETtablita().GETpuntos().insert(elem, punt);
									cout << "skill modificada correctamente." <<endl;
								}
							}
							break;
							}//Fin del caso 2.
						case 3:
							{
							cout << "ELIMINAR: " <<endl; 
							cout << "Ingrese el nombre del equipo a eliminar. " <<endl; 
							cin.ignore();
							string nuevo;
							getline(cin, nuevo);
							for (int c =0; c < liga.GETequipos().size();c++){
								Equipo equip = liga.GETequipos() [c];
								string n = equip.GETnombre();
								if (nombre = n){
									liga.GETequipos().erase(c); 
									liga.GETtablita().GETpuntos().erase(c);
								}
							}
							cout << "Equipo eliminado correctamente." <<endl; 
							break;
							}//Fin del case 3.
					}//Fin del switch del menu de mantenimiento. 
				break;	
				}//Fin del caso 1.
			case 2:
				{
				cout << "GENERAR JORNADA: " <<endl; 
				vector <Partido*> jorn; 
				int num = liga.GETequipos().size();
				for (int j = 0; j < (num / 2);j++){
					Partido* par = new Partido();
					jorn.push_back(par);
				}
				for (int c = 0; c < liga.GETequipos().size(); c++){
					srand(ftime(NULL));
					bool v = true; 
					while (v == true){
						int elem = 0 + (rand()% (num /2));
						Equipo equip = new Equipo();
						for (int h = 0; h < (num / 2);h++){
						 	Partido* part = jorn [h];
						 	if (part.GETequipo1().GETnombre == NULL && elem == h){
						 		part.SETequipo1(equip); 
						 		v = false;
								break; 
							}else if (part.GETequipo2().GETnombre() == NULL && elem == h){
								v = false;
								part.SETequipo2(equip);
								break;
							}else {
								
							}
						}
					}  
				}
				cout << "JORNADA DE LA LIGA: " << liga.GETnombre() <<endl;
				liga.SETjornada(jorn);
				for (int c =0; c < liga.GETjornada().size();c++){
					Partido* parti = liga.GETjornada() [c];
					cout << "Partido: " << c << " " << parti.GETequipo1() << " VS " << parti.GETequipo2() << "Estado: " << parti.GETgoles1() << "-" << parti.GETgoles1();  
				}	
				break;
				}//Fin del caso 2.
			case 3:
				{
				cout << " SIMULACION: " <<endl; 
					
				break; 
				}//Fin del caso 3. 
		}//Fin del switch de los modulos. 
	}//Fin del while del programa. 
	
	
	
	
	return 0;
}//Fin del MAIN.