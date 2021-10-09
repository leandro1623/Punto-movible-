#include<iostream>
#include<iomanip>
#include"puntoM.h"
using std::setw;

void puntoM::set_x(int x){
	this->x=x;
}

void puntoM::set_y(int y){
	this->y=y;
}

int puntoM::get_x(){
	return this->x;
}

int puntoM::get_y(){
	return this->y;
}

void puntoM::limpiar_mapa(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			this->map[i][j]='#';
		}
	}
}

void puntoM::punto_en_el_mapa(){
	this->map[this->x][this->y]='.';
}

void puntoM::ver_mapa(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			std::cout<<this->map[i][j];
		}
		std::cout<<"\n";
	}
}