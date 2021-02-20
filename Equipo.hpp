#ifndef EQUIPO.HPP
#define EQUIPO.HPP
#include <iostream>
#include <string>

using namespace std; 
	
class Equipo{
	private : 
	string nombre;
	int skill; 
	
	public: 
	Equipo();
	Equipo(string );
	int GETskill();
	string GETnombre();
	void SETskill(int);
	void SETnombre(string);
	
};//Fin de la clase.

#endif