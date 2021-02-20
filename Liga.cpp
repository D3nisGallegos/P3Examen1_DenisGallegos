#include <iostream>
#include <string>
#include <vector>
#include "Equipo.cpp"
#include "Partido.cpp"
#include "Puntos.cpp"
#include "Puntos.hpp"
#include "Tabla.cpp"
#include "Liga.hpp"

Liga :: Liga(){
	
}

Liga :: Liga(string x, vector <Equipo*> x1, vector <Partido*> x2,Tabla x3){
	nombre = x; 
	equipos = x1; 
	jornada = x2; 
	tablita = x3;
}

void Liga :: SETequipos(vector <Equipo*> x){
	equipos = x;
}
	void Liga :: SETjornada(vector <Partido*> x){
		jornada = x; 
	}
	void Liga :: SETtablita(Tabla x ){
		tablita = x; 
	}
	void Liga :: SETnombre(string x){
		nombre = x; 
	}
	vector <Equipo*> Liga :: GETequipos(){
		return equipos; 
	}
	vector <Partido*> Liga :: GETjornada(){
		return jornada; 
	}
	string GETnombre(){
		return nombre; 
	} 
	Tabla GETtablita(){
		return tablita; 
	}		