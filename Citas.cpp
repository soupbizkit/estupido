#include "Citas.h"

Citas::Citas(string dia, string descripcion){
	this->dia = dia;
	this->descripcion = descripcion;
}
Citas::~Citas(){
}
string Citas::getDia(){
	return dia;
}
string Citas::getDescripcion(){
	return descripcion;
}
void Citas::setDia(string dia){
	this->dia = dia;
}
void Citas::setDescripcion(string descripcion){
	this->descripcion = descripcion;
}
