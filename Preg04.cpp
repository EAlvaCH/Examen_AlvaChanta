#include <iostream>
using namespace std;

int main(){
//	Mostrar si un numero es perfecto. Es perfecto cuando la suma de sus divisores da el mismo numero.
	 int numero, sumaDeDigitos = 0;
 
	 cout<<"Ingrese un numero: ";cin>>numero;
	 
	 for(int i=1; i<=numero; i++){
	 	if(numero % i == 0 && i != numero){
	 		sumaDeDigitos += i;
		 }
	 }
	 
	 
	if(numero == sumaDeDigitos) {
		cout<<"El numero "<<numero<<" es perfecto";
	}
	else{
		cout<<"El numero "<<numero<<" no es perfecto";
	}
	
	return 0;
}
