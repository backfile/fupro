#include <iostream>
using namespace std;

int main() {
	float radio; float area; float perimetro;
	const float PI = 3.1416;
	
	std::cout << "Ingrese el radio: " << std::endl;
	std::cin >> radio;
	
	perimetro = 2*radio*PI;
	area = radio*radio*PI;
	
	std::cout << "El perimetro es: " << perimetro << std::endl;
	std::cout << "El area es: " << area;
	

	
	return 0;
}

