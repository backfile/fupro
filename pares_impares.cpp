#include <iostream>


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

