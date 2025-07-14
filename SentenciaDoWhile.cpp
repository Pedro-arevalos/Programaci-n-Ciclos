 /*La setencia  do while:

	do{
		conjunto de instrucciones;  este conjunto de instrucciones se ejecuta si o si almenos una vez. 
									mientras se comprueva que cumpla una determinada condicion ("expresion logica") 
									se seguira ejecutando hasta que deje de cumplirce
		}while (expesion logica)
*/
//setencia do while primero actua luego piensa

#include<iostream>
#include<stdlib.h>


using namespace std;

int i;

int main()
	{
		i=1;
		
		do{
			cout<<"\t\t\t"<<i<<endl;
				
				i++; // esto es igual a i += 1 o i = i + 1 su representacion mas corta es i++
		}while(i<=10); // i <= 10 con i++ y el iterador i=1, va sumando uno hasta llegar hasta llegar a 10 y i>=1 con i-- 
					// y empenzacon con el iterador i=10, lo que hace es que decrementa de 10 a 1
		
		system("pause");
			
	
		return 0;
 	}
