#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	std::cout << "Ingrese un numero la medida pies: " << std::endl;
	float number;
	std::cin >> number;
	float conversion = number*0.3048;
	std::cout << "La conversion a metros es: " << conversion;
	
	return 0;
}

