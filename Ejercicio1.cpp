#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float radio,area;
	cout << "Ingrese el radio del circulo" << endl;
	cin >> radio;   
	area=M_PI*pow(radio,2); 
	cout << "El area del circulo es: " << area; 
	return 0;	
} 