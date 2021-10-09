#include <iostream>
#include<iomanip>
#include"puntoM.h"
																//programa terminado


int main() {
	char move;
	int x,y;
	x=y=4;
	puntoM punto(x,y);
	
	do{
		system("cls");
		punto.ver_mapa();
		std::cout<<"\n\nPresione x para salir";
		std::cout<<"\n\n> ";
		
		std::cin>>move;
	
		if(move=='w'||move=='W'){//arriba
			x-=1;
			punto.set_x(x);
			punto.limpiar_mapa();
			punto.punto_en_el_mapa();
		}
		else if(move=='s'||move=='S'){//abajo
			x+=1;
			punto.set_x(x);
			punto.limpiar_mapa();
			punto.punto_en_el_mapa();
		}
		else if(move=='a'||move=='A'){//izquierda
			y-=1;
			punto.set_y(y);
			punto.limpiar_mapa();
			punto.punto_en_el_mapa();
		}
		else if(move=='d'||move=='D'){//derecha
			y+=1;
			punto.set_y(y);
			punto.limpiar_mapa();
			punto.punto_en_el_mapa();
		}
		else if(move=='x'||move=='X'){
			break;
		}
		else{
			continue;
		}
		
	}while(true);
	
	return 0;
}