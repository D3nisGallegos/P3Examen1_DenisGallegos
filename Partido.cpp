#include <iostream>
#include <string>
#include "Partido.hpp"

using namespace std; 

int Partido :: GETgoles1(){
	return goles1; 
}


int Partido :: GETgoles2(){
	return goles2;
}


bool Partido :: GETjugado(){
	return jugado; 
}

Equipo Partido :: GETequipo1(){
	return equipo1; 
}

Equipo Partido :: GETequipo2(){
	return equipo2; 
}

void Partido :: SETgoles1(int x){
	goles1 = x; 
}

void Partido :: SETgoles2(int x){
	goles2 = x; 
}

void Partido :: SETjugado(bool x){
	jugado = x; 
}

void Partido :: SETequipo1(Equipo x){
	equipo1 = x; 
}

void Partido :: SETequipo2(Equipo x){
	equipo2 = x; 
}







