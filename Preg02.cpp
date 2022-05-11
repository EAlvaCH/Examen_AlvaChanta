#include <iostream>
using namespace std;

int main(){
//	Pregunta 02: Separar un numero en los digitos que lo componen
	int numero = 0;
	int numeros [30];
	
	cout<<"Ingresa el numero de tu preferencia: ";cin>>numero;
	
	int i = 0;
	while(numero != 0){
		numeros[i] = numero % 10;
		numero = numero / 10;
		i++;
	}
	
	for(int j = i - 1; j >= 0 ;j--){
		cout<<numeros[j]<<endl;	
	}
	
	return 0;
}
