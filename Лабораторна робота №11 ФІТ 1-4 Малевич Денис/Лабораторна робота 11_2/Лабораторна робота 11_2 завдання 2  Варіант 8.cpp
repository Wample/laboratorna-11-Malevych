#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int array[100];
    int j = 0;
    int i = -50;

    cout << endl;

    cout << "Початковий масив: ";
    while (j < 101)
    {
        array[j] = i;
        cout << array[j] << " ";
        i++;
        j++;
    }
    cout << endl;
    cout << endl;
    cout << "Послідовність яка має найбільше абсолютне значення середнього арифметичного її значення: " << endl;




}