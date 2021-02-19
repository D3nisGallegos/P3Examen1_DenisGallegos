#include <iostream>
#include <string>
#include <math.h>
#include "Equipo.hpp"

using namespace std; 


int Equipo :: GETskill(){
	return skill; 
}

void Equipo :: SETskill(int x){
	skill = x; 
}

string Equipo :: GETnombre(){
	return nombre; 
}

void Equipo :: SETnombre(string x){
	nombre = x;
}

Equipo :: Equipo(){
	
}

Equipo :: Equipo(string x){
	nombre = x;
	//srand(ftime(NULL));
	skill = 0 + (rand()% 100);
}