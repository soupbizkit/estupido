#infdef HISTORIA_H
#define HISTORIA_H
#include <string>

using namespace std;

class Enfermedades{
	privado:
		string nombre;
		string descripcion;
	public:
		Enfermedades(string nombre, string descripcion);
		~Enfermedades();
		
		string getNombre();
		string getDescripcion();
		
		void setNombre(string nombre);
		void setDescripcion(string descripcion);

};
#endif
		
