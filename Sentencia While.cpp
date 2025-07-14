/*La setencia while:

	while (expesion logica)
		{
		conjunto de instrucciones;  este conjunto de instrucciones se sigue repitendo en un determinado ciclo o bucle 
									mientras se siga cumpliedo una determinada condicion ("expresion logica")
		}
*/
//setencia while primero piensa luego actua 

#include<iostream>
#include<conio.h> //nueva libreria 

using namespace std;

int i;

int main()
	{
		i=1; // = 1 es el iterador si queremos que cuente de 10 a 1; i = 10 si queremos que lo haga a la inversa
		while(i<=10) // i <= 10 con i++ y el iterador i=1, va sumando uno hasta llegar hasta llegar a 10 y i>=1 con i-- 
					// y empenzacon con el iterador i=10, lo que hace es que decrementa de 10 a 1
			{
				cout<<i<<endl;
				
				i++; // esto es igual a i += 1 o i = i + 1 su representacion mas corta es i++
			}
		
		getch(); // su funcion es que el ejecutable no cierre automaticamente 
		return 0;
 	}
