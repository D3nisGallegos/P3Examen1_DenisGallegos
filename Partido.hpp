#ifndef PARTIDO.HPP
#define PARTIDO.HPP
#include <iostream>
#include <string>
#include <vector>
#include "Equipo.cpp"
#include "Puntos.cpp"

class Partido{
	private : 
	Equipo equipo1;  
	Equipo equipo2;
	bool jugado;   
	int goles1; 
	int goles2;
	
	public: 
	Partido();
	int GETgoles1();
	int GETgoles1();
	bool GETjugado();
	Equipo GETequipo1();
	Equipo GETequipo2();
	void SETgoles1(int);
	void SETgoles1(int);
	void SETjugado(bool);
	void SETequipo1(Equipo); 	
	void SETequipo2(Equipo); 	
	
};//Fin de la clase.

#endif