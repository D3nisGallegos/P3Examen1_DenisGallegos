
#include <iostream>
#include <string>
#include <vector>
#include "Equipo.cpp"
#include "Partido.cpp"
#include "Puntos.cpp"
#include "Tabla.cpp"
#pragma once

using namespace std; 

class Liga{
	private : 
	string nombre; 
	vector <Equipo*> equipos; 
	vector <Partido*> jornada;   
	Tabla tablita; 
	
	public: 
	Liga(); 
	Liga(string, vector <Equipo*> , vector <Partido*> ,Tabla);
	void SETequipos(vector <Equipo*>);
	void SETjornada(vector <Partido*>);
	void SETtablita(Tabla);
	void SETnombre(string);
	vector <Equipo*> GETequipos();
	vector <Partido*> GETjornada();
	string GETnombre(); 
	Tabla GETtablita();		
	
};//Fin de la clase.

