#include <iostream>
#include <string>
#pragma once

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