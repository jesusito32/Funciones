#include <iostream>

using namespace std;

void porValor(int a){
	a = 10;
	cout << "Dentro de por valor, a = "<<a<<endl;
}

void porReferencia(int &a){

	a=10;
	cout << "Dentro de por referencia, a = "<<a<<endl;
}
int main(){
	int num=5;
	cout << "Antes de pasar por valor, num =  " << num << endl;
	porValor(num);
	cout << "Luego de pasar por valor , num = " << num << endl;
	
	cout << "Ante de pasar por referencia, num = " << num << endl;
	porReferencia(num);
	cout << "Luego de pasar por referencia, num = " << num << endl;
	
	
	
	return 0;
}