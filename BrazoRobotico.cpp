#include "BrazoRobotico.h"
#include <iostream>

using namespace std;

// Constructor
BrazoRobotico::BrazoRobotico() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	objeto = 0;
}

BrazoRobotico::BrazoRobotico(double ix, double iy, double iz) {
	x = ix;
	y = iy;
	z = iz;
	objeto = 0;
}

// Consultores de las variables
double BrazoRobotico::getX() {
	return x;
}

double BrazoRobotico::getY() {
	return y;
}

double BrazoRobotico::getZ() {
	return z;
}

bool BrazoRobotico::getObjeto() {
	return objeto;
}

// Métodos
void BrazoRobotico::coger() {
	if(objeto == 1) cout << "El robot ya tiene un objeto" << endl;
	else {
	objeto = 1;
	cout << "El robot ha cogido el objeto!" << endl;
	}
}

void BrazoRobotico::soltar() {
	if(objeto == 0) cout << "El robot no tiene objeto que soltar!" << endl;
	else {
		objeto = 0;
		cout << "El robot ha soltado el objeto" << endl;
	}
}
		
void BrazoRobotico::mover(double ix, double iy, double iz) {
	x += ix;
	y += iy;
	z += iz;
}

