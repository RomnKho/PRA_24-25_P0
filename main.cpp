#include "BrazoRobotico.h"
#include <iostream>

using namespace std; 

int main() {
	BrazoRobotico r;
	r.mover(2.0, 3.0, 4.0);
	cout << "Robot en: " <<  r.getX() <<  "," <<  r.getY() << "," <<  r.getZ() << endl;
	r.coger();
	cout << "Robot tiene objeto? " << r.getObjeto() << endl;
	r.soltar();
	cout << "Robot tiene objeto? " << r.getObjeto() << endl;
	return 0;
}
