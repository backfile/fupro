#include <iostream>
using namespace std;

class Persona{
	private: // Atributos  // Encapsulamiento
		int edad; 
		string nombre;
	public: // Metodos
		Persona(int, string); // Contructor
		void leer();
		void correr();
};

//Contrustor, sirve para inicializar los atributos.
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout << "Soy " << nombre<<" y estoy leyendo" << endl;
}

void Persona::correr(){
	cout << "Soy " << nombre << " y estoy corriendo" << endl;
}

int main(int argc, char *argv[]) {
	
	Persona p1 = Persona(20, "Franco"); //inicializo la clase
	Persona p2(19, "Agustin"); //inicializo la clase
	Persona p3(50, "Juan"); //inicializo la clase
	
	p1.leer();
	p2.leer();
	
	p3.leer();
	p3.correr();
	
	return 0;
}

