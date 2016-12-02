#include "Medicamento.h"

Medicamento::Medicamento(string nombre, int numeroDosis){
	this->nombre = nombre;
	this->numeroDosis = numeroDosis;
}

Medicamento::~Medicamento(){
}

string Medicamento::getNombre(){
	return nombre;
}

int Medicamento::getNumeroDosis(){
	return numeroDosis;
}	

void Medicamento::setNombre(string nombre){
	this->nombre = nombre;
}
void Medicamento::setNumeroDosis(int numeroDosis){
	this->numeroDosis = numeroDosis;
}
