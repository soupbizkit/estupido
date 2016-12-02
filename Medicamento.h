#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <string>

class Medicamento{
	private:
		string nombreM;
		int numeroDosis;
		
	public:
		Medicamento(string nombreM, int numeroDosis);
		~Medicamento();
		
		string getNombreM();
		int getNumeroDosis();
		
		void setNombre(string nombreM);
		void setNumeroDosis(int numeroDosis);
		



};
#endif
