/* La sentencia for
	for(exprecion1; expresion logica; expresion2) *expresion1 : casi siempre se utiliza para inicializar 
													el iterador ej: i=1
												  *expresion logica : es la condicion que tiene que cumplirse y cuando
												  deje de cumplirce termien el bucle ej: i<=10
												  *expresion2 : sirve para aumentar o disminuir el iterador ej: i++
	{
	conjunto de instrucciones; * mientras la expresion logica se cumpla se seguira ejecutando 
	}
*/

#include<iostream>
#include<conio.h>

using namespace std;

int i;

int main()
	{
		for(i=1; i<=10; i++)
			{
				cout<<"\n\t\t"<<i<<endl;		
			}

		getch(); //se utiliza para impedir que el ejecutable se cierre
				
		return 0;
	}
