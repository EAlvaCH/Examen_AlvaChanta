#include <iostream>
using namespace std;

int main(){
//	Mostrar si un numero es capicua
	 int numero, auxiliar, resto, numeroInvertido = 0;
 
	 cout<<"Ingrese numero: ";cin>>numero;
	 auxiliar = numero;
	 
	 while(auxiliar>0){
	    resto=auxiliar%10;
	    auxiliar=auxiliar/10;
	    numeroInvertido=numeroInvertido*10+resto;
	 }
	 
	 if(numeroInvertido==numero) cout<<"No es capicua";
	 else cout<<"Si no capicua";
	
	return 0;
}
