#include "Historia.h"

Historia::Historia(string nombreEnfermedad, string descripcionEnfermedad, string diaCita, 
				string descripcionCita, string nombreMedicamento, int dosisMedicamento){
				ObjEnfermedad = new Enfermedad(string nombreEnfermedad, string descripcionEnfermedad);
				ObjCita = new Cita(string diaCita, string descripcionCita);
				ObjMedicamento = new Medicamento(string nombreMedicamento, int dosisMedicamento);
				}
Historia::~Historia(){
	delete ObjEnfermedad;
	delete ObjCita;
	delete ObjMedicamento;
}
//Enfermedad
string Historia::getNombreEnfermedad(){
	return ObjEnfermedad->getNombre();
}
string Historia::getDescripcionEnfermedad(){
	return ObjEnfermedad->getDescripcion();
}
		
void Historia::setNombreEnfermedad(string nombreIn){
	ObjEnfermedad->setNombre(nombreIn);
}
void Historia::setDescripcionEnfermedad(string descripcionIn){
	ObjEnfermedad->setDescripcion(descripcionIn
}
				
//Citas
string Historia::getDiaCita(){
	return ObjCita->getDia();
}
string Historia::getDescripcionCita(){
	return ObjCita->getDescripcion();
}
		
void Historia::setDiaCita(string diaIn){
	ObjCita->setDia(diaIn);
}
void Historia::setDescripcionCita(string descripcionIn){
	ObjCita->setDescripcion(descripcionIn);
}

//Medicamentos
string getNombreMedicamento(){
	return ObjMedicamento->getNombre();
}
string getDosisMedicamento(){
	return ObjMedicamento->getNumeroDosis();
}
	
void setNombreMedicamento(string nombreIn){
	ObjMedicamento->setNombre(nombreIn);
}
void setDosisMedicamento(int dosisIn){
	ObjMedicamento->setNumeroDosis(dosisIn);
}
