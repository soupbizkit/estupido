#infdef PACIENTE_H
#define PACIENTE_H
#include <string>
std::string;

class Paciente {
	private:
		int cedula;
		string nombre;
		string sexo;
		int edad;
	public:
		Paciente(int cedula, string nombre, string sexo, int edad);
		~Paciente();
		
		int getCedula();
		string getNombre();
		string getSexo();
		int getEdad();
		
		void setCedula(int cedula);
		void setNombre(string nombre);
		void setSexo(string sexo);
		void setEdad(int edad);
	
		


};
#endif
