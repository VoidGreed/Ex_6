//exercise_1

#include <iostream>
using namespace std;

//int main()
//{
//	long n,somma=0;
//	cout << "Inserisci N:";
//	cin >> n;
//	for (int i = 0; i <=n; i++)								//iterative solution
//	{
//		somma = somma + i;
//	}
//
//	cout << "=" << somma;
//}
long sum(long n, int somma)
{
	
	if (n == 0)
	{
		return somma;
	}
	else
		if (n > 0)
		{															//recursive solution
			somma = somma + n;
			return sum(n - 1, somma);
		}
		else
			somma = somma + n;
			return sum(n + 1, somma);
}

int main()
{
	long n,somma=0;
	cout << "Inserisci N:";
	cin >> n;
	cout << "la somma e' " << sum(n,somma)<<endl;

}
