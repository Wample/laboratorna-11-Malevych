#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
void funcA(int i, double& a) 
{
	for (int k = i; k < i + 5; k++) a += (3.1 * cos(k + 2.3)) / (sin(k) + 3);
}
void funcB(int i, double& b)
{
	for (int k = i; k < i + 6; k++) b += (3.1 * cos(k + 2.3)) / (sin(k) + 3);
}
int main() {   
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const double PI = 3.141592653589793;
	const int i = 4;
	cout << "i= " << i << endl;
	double a = 0;
	funcA(i, a);
	cout << "a= " << a << endl;
	double b = 0;
	funcB(i, b);
	cout << "b= " << b << endl;
	float z = pow(a + b, 2);
	cout << "z: " << z << endl;


	return 0;

}