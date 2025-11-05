/* Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados 
de los 10 primeros enteros mayoreres que cero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int suma = 0, cuadrado;

int main(){
			for(int i=10; i<=13; i++){
				cuadrado = i * i;
				suma += cuadrado; // suma = suma + cuadrado
			}
			
			cout<<"El resultado de la suma es: "<<suma<<endl;	

	
	getch();
	return 0;
}
