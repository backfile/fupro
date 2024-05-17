#include <iostream>
#include <tuple>


std::tuple <int, int> funcionTupla();

int main(int argc, char *argv[]) {
	
	std::tuple<int, int> resultado = funcionTupla();
	std::cout << std::get<0>(resultado);
	
	return 0;
}

std::tuple <int, int> funcionTupla(){
	int a = 10;
	int b = 20;
	return std::make_tuple(a, b);
}
