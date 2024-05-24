#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v(20);
	for(int i = 0; i < v.size(); i++){
		v[i] = 100 + rand()%51;
		cout << v[i] << "  ";
	}
	 // valor m debe ser insertado en la posicion p
	
	
	int m;
	int p;
	cout << "Ingrese el valor" << endl;
	cin >> m;
	cout << "Ingrese la pocision" << endl;
	
	cin >> p;
	
	v.push_back(0);
	
	for(int i = v.size() - 1; i > p; i--){
		v[i] = v[i - 1];
	}
	
	v[p] = m;
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << "  ";
	}
	
	
	
	
	
}

