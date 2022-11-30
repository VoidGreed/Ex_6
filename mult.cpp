/* Exercise 2
* Esercizio 2
Scrivere la funzione ricorsiva:

long mult(long a, long b)

che restituisce il risultato della moltiplicazione di a per b volte.
Si consideri anche il caso in cui a e/o b hanno valori negativi.

*/

#include <iostream>
using namespace std;

long mult(long a, long b)
{
	
	if(a==0)
	{
		return 0;
	}
	else

	if ((b == 1)||(b==0))
	{
		return a;
	}
	else
	{
		a = a * b;
		return mult(a, b - 1);
	}
}
int main()
{
	long a, b;
	cout << "Inserire A:";
	cin >> a;
	cout << "Inserire b:";
	cin>> b;
	cout<<"Risultato:"<< mult(a, b);
	system("pause");
}

