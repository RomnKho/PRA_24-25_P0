#include "BrazoRobotico.h"

class BrazoRobotico {
	private: 
		double x, y, z;
		bool objeto;
	public:
		// Constructor
		BrazoRobotico() {
			x = 0.0;
			y = 0.0;
			z = 0.0;
			objeto = 0;
		}

		BrazoRobotico(double ix, double iy, double iz) {
			x = ix;
			y = iy;
			z = iz;
			objeto = 0;
		}

		// Consultores de las variables
		double getX() {
			return x;
		}

		double getY() {
			return y;
		}

		double getZ() {
			return z;
		}

		bool getObjeto() {
			return Objeto;
		}

		// Métodos
		void coger() {
			if(objeto == 1) std::cout << "El robot ya tiene un objeto" << endl;
			else {
			objeto = 1;
			std::cout << "El robot ha cogido el objeto!" << endl;
			}
		}

		void soltar() {
			if(objeto == 0) std::cout << "El robot no tiene objeto que soltar!" << endl;
			else {
				objeto = 0;
				std::cout << "El robot ha soltado el objeto" << endl;
			}
		}
		
		void mover(double ix, double iy, double iz) {
			x += ix;
			y += iy;
			z += iz;
		}
}
