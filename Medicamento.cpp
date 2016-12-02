#include "Medicamento.h"

Medicamento::Medicamento(string nombreM, int numeroDosis){
	this->nombreM = nombreM;
	this->numeroDosis = numeroDosis;
}

Medicamento::~Medicamento(){
}

string Medicamento::getNombreM(){
	return nombreM;
}

int Medicamento::getNumeroDosis(){
	return numeroDosis;
}	

void Medicamento::setNombreM(string nombreM){
	this->nombreM = nombreM;
}
void Medicamento::setNumeroDosis(int numeroDosis){
	this->numeroDosis = numeroDosis;
}
