#ifndef TABLA.HPP
#define TABLA.HPP
#include <iostream>
#include <string>
#include <vector>
#include "Equipo.cpp"
#include "Partido.cpp"
#include "Puntos.cpp"

using namespace std; 

class Tabla{
	private : 
	vector <Puntos*> puntos; 
	
	public: 
	Tabla();
	Tabla(vector <Puntos*> );
	void SETpuntos(vector <Puntos*>);
	vector <Puntos*> GETpuntos();
		
	
};//Fin de la clase.

#endif