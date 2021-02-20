
#include <iostream>
#include <string>
#include "Equipo.cpp"
#pragma once

using namespace std; 

class Puntos{
	private : 
	Equipo equipo;  
	int golesfavor; 
	int golescontra; 
	int ganados;
	int perdidos; 
	int empatados;  
	
	public: 
	Puntos();
	Puntos(Equipo, int, int, int, int, int);
	int GETgolesfavor();
	int GETgolescontra();
	int GETganados();
	int GETperdidos();
	int GETempatados();
	Equipo GETequipo();
	void SETgolesfavor(int);
	void SETgolescontra(int);
	void SETganados(int);
	void SETperdidos(int);
	void SETempatados(int);
	void SETequipo(Equipo); 		
	
};//Fin de la clase.

