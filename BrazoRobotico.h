class BrazoRobotico {
	private: 
		double x, y, z;
		bool objeto;
	public: 
		BrazoRobotico();

		BrazoRobotico(double ix, double iy, double iz);

		double getX();

		double getY();

		double getZ();

		bool getObjeto();

		void coger();

		void soltar();

		void mover(double ix, double iy, double iz);
};
