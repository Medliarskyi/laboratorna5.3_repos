#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double s(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	cout << fixed;
	cout << "------------------" << endl;
	cout << "|" << setw(3) << "t" << "   |"
		<< setw(5) << "z" << "    |" << endl;
	cout << "------------------" << endl;

	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = s(sqrt(r) + 1) - pow(s(sqrt(r) - 1), 2) + 1;
		cout << "|" << setw(5) << setprecision(2) << r
			<< " |" << setw(8) << setprecision(3) << z
			<< " |" << endl;
		r += dr;
	}
	cout << "------------------" << endl;
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1)
		return (1 + x * x + sqrt(fabs(sin(x)))) / (sin(x * 2 * x) * sin(x * 2 * x)  + 1);
	else if (x == 0);
	else
	{
		double S = 0;
		double S1 = 0;
		int i = 0;
		int k = 1;
		double a = 1;
		double a1 = 1;
		S = a;
		S1 = a1;
		do
		{
			i++;
			double R = x/i;
			a *= R;
			S += a;
		} while (i < 5);
		do
		{
			k++;
			double R1 = x / k;
			a1 *= R1;
			S1 += a1;
		} while (k < 6);

		return S+S1;
	}
}