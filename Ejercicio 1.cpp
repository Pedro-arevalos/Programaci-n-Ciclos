/*1. Realiza un programa que solicite de la entrada estándar un enetero del 
1 al 10 y muestre su salida estándar su tabla de multiplicar.*/

#include<iostream>

using namespace std;

int n;
int i;
int r;

int main()
	{
		cout<<"Escriba un numero del 1 al 10"<<endl;
		cin>>n;
		cout<<"Tu numero es \t"<<n<<endl;
		cout<<"La tabla de"<<n<<"es"<<endl;
		for(i=1; i<=20; i++)
			{
				r= n * i;
			cout<<n<<" * "<<i<<" = "<<r<<endl;
			}
		
		return 0;
	}
