#include "Paciente.h"

Paciente::Paciente(int cedula, string nombre, string sexo, int edad){
	this->cedula = cedula;
	this->nombre = nombre;
	this->sexo = sexo;
	this->edad = edad;
	
}

Paciente::~Paciente(){

}

int Paciente::getCedula(){
	return cedula;
}

string Paciente::getNombre(){
	return nombre;
}

string Paciente::getSexo(){
		return sexo;
}

int Paciente::getEdad(){
		return edad;
}

void Paciente::setCedula(int cedula){
	this->cedula=cedula;
}

void Paciente::setNombre(string nombre){
	this->nombre=nombre;
}

void Paciente::setSexo(string sexo){
	this->sexo=sexo;
}

void Paciente::setEdad(int edad){
	this->edad=edad;
}
