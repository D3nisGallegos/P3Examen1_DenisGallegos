#include <iostream>
#include <string>
#include <vector>
#include "Tabla.hpp"

using namespace std;

Tabla :: Tabla(){
	
} 

Tabla :: Tabla(vector <Puntos*> x){
	puntos = x; 
}

void Tabla :: SETpuntos(vector <Puntos*> x){
	puntos = x; 
}

vector <Puntos*> Tabla :: GETpuntos(){
	return puntos;
}
