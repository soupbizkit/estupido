#infdef HISTORIA_H
#define HISTORIA_H
#include "Enfermedades.h"
#include "Citas.h"
#include "Medicamento.h"

#include <string>

using namespace std;

class Historia{
	privado:
		Enfermedades *ObjEnfermedad;
		Citas *ObjCita; 
		Medicamento *ObjMedicamento;
	public:
		Historia(string nombreEnfermedad, string descripcionEnfermedad, string diaCita, 
				string descripcionCita, string nombreMedicamento, int dosisMedicamento);
		~Historia();
		//Enfermedad
		string getNombreEnfermedad();
		string getDescripcionEnfermedad();
		
		void setNombreEnfermedad(string nombreIn);
		void setDescripcionEnfermedad(string descripcion);
		
		//Citas
		string getDiaCita();
		string getDescripcionCita();
		
		void setDiaCita(string diaIn);
		void setDescripcionCita(string descripcionIn);
		
		//Medicamento
		string getNombreMedicamento();
		string getDosisMedicamento();
		
		void setNombreMedicamento(string nombreIn);
		void setDosisMedicamento(int dosisIn);
		

};
#endif
		
