#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	float raiz1,raiz2,div;
	double discriminante,imaginario;
	cout << "Formula general de ecuacion de segundo grado " << endl;
	cout << "---------------------------------"<< endl;
	cout << "Ingrese el primer coeficiente a: " << endl;
	cin >> a;
	cout << "Ingrese el segundo coeficiente b: " << endl;
	cin >> b;
	cout << "Ingrese el tercer coeficiente c: " << endl;
	cin >> c;
	div=(2*a);
	discriminante=pow(b,2)-(4*a*c);
	if (discriminante > 0){
		raiz1=(-b+sqrt(discriminante))/div;
		raiz2=(-b-sqrt(discriminante))/div;
		cout <<"Las raices son reales. La primera raiz es: " << raiz1 << " , y la segunda raiz es:  " << raiz2 << endl;
		}
	else if(discriminante == 0){
		raiz1=-b/div;
		cout <<"Unica raiz. La raiz es: " << raiz1 << endl;	
		}
	else{ 
		imaginario=discriminante*-1;
		raiz1=-b/div;
			cout <<"Las raices son complejas. La primera raiz es: " << raiz1 <<" + "<<imaginario<< "i , y la segunda raiz es:  " << raiz1 << " - " <<imaginario<<"i"<< endl;
		} 
	
	
	
}
