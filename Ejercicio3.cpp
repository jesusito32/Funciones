#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int cateto1,cateto2,hipotenusa;
	cout << "Teorema de pitagoras" << endl;
	cout << "---------------------------" << endl;
	cout << "Ingresa el primer cateto" << endl;
	cin >> cateto1;
	cout << "Ingresa el segundo cateto" << endl;
	cin >> cateto2;
	hipotenusa = sqrt(pow(cateto1 , 2) + pow(cateto2 , 2) );
	cout << "La hipotenusa del triangulo es: " << hipotenusa; 
	
	
	
	
	return 0;
}
