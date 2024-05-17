#include <iostream>
#include <cmath>
using namespace std;


bool es_primo(int num);

int main(int argc, char *argv[]) {
	int i;
	int numeros_encontrados = 0;
	int n = 0;
	do{
		
		bool resultado = es_primo(n);
		
		if(resultado == true){
			numeros_encontrados = numeros_encontrados + 1;
		}

		n++;
		
	}while(numeros_encontrados < 50);
	
	cout << "Se encontraron " << numeros_encontrados << " numeros primos";
	
	return 0;
}


bool es_primo(int num){
	int divisor = 2;
	while(divisor<=sqrt(num) && num%divisor != 0){
		d++;
	}
	if(sqrt(num)<divisor){
		cout << num << " es primo" << endl;
		return true;
	}else
		 return false;
		 
}
