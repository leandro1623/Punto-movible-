class puntoM{
	private:
		int x,y;
		char map[10][10];
	public:
		puntoM(int x,int y){//constructor
			limpiar_mapa();
			this->x=x;
			this->y=y;
			punto_en_el_mapa();
		}
		puntoM(){//constructor
			x=y=4;
			limpiar_mapa();
		}
		void set_x(int);
		void set_y(int);
		int get_x();
		int get_y();
		void limpiar_mapa();
		void punto_en_el_mapa();
		void ver_mapa();
		
};