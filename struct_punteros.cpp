#include <iostream>
using namespace std;

//Struct y punteros

struct Persona{ //Struct
	string nombre;
	int edad;
	float nota;
	string apellido;
}persona1 = {"Agustin", 18, 17.5, "Fernandez"}; //Inicializo

struct Perro{
	int edad;
	string owner;
	
	Perro()
	{// Contructor para la estructura "Perro"
		edad = 11;
		owner = "Franco";
	}
};

int main() {
	int *dir_age; //Puntero
	
	//Probando dircciones en memoria
	dir_age = &persona1.edad; 
	cout << &persona1 << endl;
	cout << &persona1.nombre << endl;
	cout << dir_age << endl;
	cout << &persona1.nota << endl;
	cout << &persona1.apellido << endl;
	
	// Estructura con contructor
	Perro lolo;
	cout << lolo.edad <<endl;
	cout << lolo.owner << endl;
	
	
	

	return 0;
}

