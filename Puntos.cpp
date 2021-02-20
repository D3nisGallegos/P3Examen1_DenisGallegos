#include <iostream>
#include <string>
#include <math.h>
#include "Equipo.cpp"
#include "Puntos.hpp"

using namespace std; 

int Puntos :: GETgolesfavor(){
	return golesfavor; 
}


int Puntos :: GETgolescontra(){
	return golescontra;
}

int Puntos :: GETganados(){
	return ganados;
}

int Puntos :: GETperdidos(){
	return perdidos;
}

int Puntos :: GETempatados(){
	return empatados;
}

Equipo Puntos :: GETequipo(){
	return equipo; 
}


Puntos :: Puntos(){
	
}

Puntos :: Puntos(Equipo x, int x1, int x2, int x3, int x4, int x5){
	equipo = x; 
	golesfavor = x1; 
	golescontra = x2; 
	ganados = x3; 
	perdidos = x4; 
	empatados = x5; 
}


void Puntos :: SETgolesfavor(int x){
	golesfavor = x; 
}

void Puntos :: SETgolescontra(int x){
	golescontra = x; 
}

void Puntos :: SETganados(int x){
	ganados = x; 
}

void Puntos :: SETperdidos(int x){
	perdidos = x; 
}

void Puntos :: SETempatados(int x){
	empatados = x; 
}


void Puntos :: SETequipo(Equipo x){
	equipo = x; 
}