#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <string>

class Medicamento{
	private:
		string nombre;
		int numeroDosis;
		
	public:
		Medicamento(string nombre, int numeroDosis);
		~Medicamento();
		
		string getNombre();
		int getNumeroDosis();
		
		void setNombre(string nombre);
		void setNumeroDosis(int numeroDosis);
		



};
#endif
