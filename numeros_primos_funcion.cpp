#include <iostream>
#include <cmath>
using namespace std;


bool es_primo(int num);

int main(int argc, char *argv[]) {
	cout << "Ingrese la cantidad de numeros primos que desea encontrar (se buscarán los primeros): " << endl;
	int cantidad;
	cin >> cantidad;
	int numeros_encontrados = 0;
	int n = 2;
	
	do{
		
		bool resultado = es_primo(n);
		
		if(resultado == true){
			cout << n << " es primo" << endl;
			numeros_encontrados = numeros_encontrados + 1;
		}

		n++;
		
	}while(numeros_encontrados < cantidad);
	
	cout << "Se encontraron " << numeros_encontrados << " numeros primos";
	
	return 0;
}


bool es_primo(int num){
	int divisor = 2;
	while(divisor<=sqrt(num) && num%divisor != 0){
		divisor++;
	}
	if(sqrt(num)<divisor){
		return true;
	}else
		 return false;
		 
}
