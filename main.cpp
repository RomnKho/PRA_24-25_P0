#include "BrazoRobotico.hpp"

int main() {
	BrazoRobotico r = new BrazRobotico();
	r->mover(2.0, 3.0, 4.0);
	std::cout << "Robot en: " <<  getX() <<  "," <<  getY() << "," <<  getZ() << endl;
	r->coger();
	r->coger();
	r->soltar();
	return 0;
}
