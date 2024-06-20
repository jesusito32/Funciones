#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int num,numeroMagico;
	int cant,i;
	cout << "Ingrese el numero maximo de numeros aleatorios" << endl;
	cin >> num;
	cout << "Ingrese la cantidad de numeros aleatorios" << endl;
	cin >> cant;
	cout << "---------------------------------------------" << endl;
	for(i=0;i<cant;i++){
	numeroMagico = rand() % num;
	cout << numeroMagico << endl;
	}
	
	
	return 0;
}