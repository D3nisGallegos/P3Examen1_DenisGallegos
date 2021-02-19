#include <iostream>
#include <string>
#include "Equipo.cpp"
#include "Partido.cpp"

using namespace std; 

class Partido{
	private : 
	Equipo equipo1; 
	Equipo equipo2; 
	int goles1; 
	int goles2; 
	bool jugado; 
	
	public: 
	int GETgoles1();
	int GETgoles2();
	bool GETjugado();
	Equipo GETequipo1();
	Equipo GETequipo2();
	void SETgoles1(int);
	void SETgoles2(int);
	void SETjugado(bool);
	void SETequipo1(Equipo);
	void SETequipo2(Equipo);
		
	
};//Fin de la clase.