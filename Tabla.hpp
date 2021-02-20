
#include <iostream>
#include <string>
#include <vector>
#include "Equipo.cpp"
#include "Partido.cpp"
#include "Puntos.cpp"
#pragma once

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

