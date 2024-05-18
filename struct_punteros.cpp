#include <iostream>
using namespace std;

//Struct y punteros

struct Persona{ //Struct
	string nombre;
	int edad;
	float nota;
	string apellido;
}persona1 = {"Agustin", 18, 17.5, "Fernandez"};

int main() {
	int *dir_age; //Puntero
	
	dir_age = &persona1.edad;
	cout << &persona1 << endl;
	cout << &persona1.nombre << endl;
	cout << dir_age << endl;
	cout << &persona1.nota << endl;
	cout << &persona1.apellido << endl;
	
	
	
	
	return 0;
}

