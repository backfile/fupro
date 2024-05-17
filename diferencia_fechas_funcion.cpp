#include <iostream>
#include <cstdlib>
using namespace std;

int dif_ano(int a, int b);

int main(int argc, char *argv[]) {
	int a, b;
	cin >> a;
	cin >> b;
	cout << "La diferencia es de: "<< dif_ano(a, b); 
	
	return 0;
}

int dif_ano(int a, int b){
	int resta = a - b;
	int pre_resultado = resta / 10000;
	int resultado = abs(pre_resultado);
	return resultado;
}
