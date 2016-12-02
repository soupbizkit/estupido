#infdef HISTORIA_H
#define HISTORIA_H
#include <string>

using namespace std;

class Historia{
	privado:
		Enfermedades *ObjEnfermedad;
		Citas *ObjCita; 
		Medicamento *ObjMedicamento;
	public:
		Historia();
		~Historia();
		
		string getEnfermedad();
		string getCita();
		string getMedicamento();
		
		void setNombre(string nombre);
		void setDescripcion(string descripcion);

};
#endif
		
