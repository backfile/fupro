#include <iostream>

//	Escriba un programa C++ que permita ingresar natural N como dato. Obtener
//	todos los pares menores a N. Tener en cuenta que el dato puede ser tanto par
//	como impar. Debe dar al usuario la posibilidad de seleccionar por un menú la
//	opción de visualizar el listado:
//	a) En forma creciente.
//	b) En forma decreciente.	

int main() {
	int number;
	
	
	std::cout << "Ingrese un numero natural" << std::endl;
	std::cin >> number;
	while (number < 0){
		std::cout << "Ingrese un numero natural valido" << std::endl;
		std::cin >> number;
	}
	char letra;
	std::cout << "Ingrese si quiere ver el listado de forma creciente o decreciente ingrese c/d" << std::endl;
	std::cin >> letra;
	
	if(letra == 'c')
		for(int i = 0; i <= number; i += 1)
		{
			if(i % 2 == 0)
				std::cout << "El numero " << i << " es par" <<  std::endl;
		
		}
	else
		if (letra == 'd')
			for(int i = number; i >= 0; i -= 1)
			{
				if(i % 2 == 0)
					std::cout << "El numero " << i << " es par" << std::endl;
			}
		else
			std::cout << "Opcion invalida";
			
	
	
	return 0;
	
}

