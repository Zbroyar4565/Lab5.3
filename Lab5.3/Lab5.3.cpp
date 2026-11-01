#include <iostream>
#include <math.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

double z(const double x);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double pp, pk, p;
	int n;
	cout << "Введіть початковe значення p: "; 
	cin >> pp;
	cout << "Введіть кінцеве значення p: "; 
	cin >> pk;
	cout << "Введіть кількість кроків n: "; 
	cin >> n;

	if (n <= 0 || pk < pp)
	{
		cout << "Помилка: перевірте межі інтервалу та n." << endl;
		return 1;
	}
	cout << fixed;
	cout << "---------------------------------------------------------" << endl;
	cout << "|" << setw(10) << "p" << " |"
		<< setw(18) << "z(p)" << " |"
		<< endl;
	cout << "---------------------------------------------------------" << endl;

	double pg = (pk - pp) / n;
	double g = pp;
	while (g <= pk)
	{
		p = z(pow(g, 2)) + 2 * z(2 * g + pow(g, 2)) + 1;
		cout << "|" << setw(10) << setprecision(5) << g << " |"
			<< setw(18) << setprecision(5) << p << " |"
			<< endl;
		g += pg;
	}
	return 0;
}


double z(const double x)
{
	if (fabs(x) >= 1)
	{
		return (cos(2 * x) + 1) /
			(cos(x) + pow(sin(x), 2));
	}
	else
	{
		double S = 0;
		double a = 2 * x;
		S = a;

		for (int k = 1; k <= 6; k++)
		{
			a *= (4 * x * x) / (2.0 * k * (2 * k + 1));
			S += a;
		}

		return S;
	}
}
