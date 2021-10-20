// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y); // прототип
int main()
{
	double r, s;
		cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	double c =(g(r,pow(s,2)+1)*g(r,pow(s,2)+1))+ g(1,(r*r)+s)/(1+g(1,r*s)*g(1,r*s));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double x, const double y) // визначення
{
	return (sin(x)*sin(x)+cos(y)*cos(y))/(1+abs(x*y));
}