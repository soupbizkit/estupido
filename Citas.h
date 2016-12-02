#infdef CITAS_H
#define CITAS_H
#include <string>

using namespace std;

class Citas{
	privado:
		string dia;
		string descripcion;
	public:
		Citas(string dia, string descripcion);
		~Citas();
		
		string getDia();
		string getDescripcion();
		
		void setDia(string dia);
		void setDescripcion(string descripcion);

};
#endif
		
