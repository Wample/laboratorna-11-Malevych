#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int l = 0;
    int s = 0;
    int s1 = 0;
    int p = 0;
    int x = 0;
    int y = 0;
    int array[9][9] =
    {
     {3, 7, -5, 3, 0, 3, 5, 7, 1},
     {0, -3, 56, 2, 34, 6, -4, 2, 3},
     {65, 4, 3, 0, 3, 67, 6, 0, -12},
     {5, 0, 2, 0, 5, 6, 13, -1, 5},
     {90, -19, 2, 8, 15, 9, 2, 7, 8},
     {0, 5, 2, -7, 4, 44, 8, 4, 0},
     {70, 4, -6, 3, 6, 1, 4, 6, 8},
     {-7, 6, 15, 7, 11, 4, 7, 4, 9},
     {7, 9, 3, 6, 2, 8, 67, 9, 5}
    };
    cout << endl;

    cout << "Початковий масив: " << endl;
    cout << endl;
    while (l < 9)
    {
        while (s < 9)
        {
            cout << array[l][s] << " ";
            s++;
        }
        cout << endl;
        l++;
        s = 0;
    }
    cout << endl;

    l = 0;
    s = 0;
    while (l < 9)
    {
        while (s < 9)
        {
            if (array[l][s] < 0)
            {
                s1 = s1 + 1;
            }
            s++;
        }
        l++;
        s = 0;
    }
    l = 0;
    s = 0;
    p = 0;
    while (l < 9)
    {
        while (s < 9)
        {
            if (array[l][s] < p)
            {
                p = array[l][s];
                x = l + 1;
                y = s + 1;
            }
            s++;
        }
        l++;
        s = 0;
    }

    cout << "Кількість відʼємних елементів: " << s1 << endl;
    cout << "Найменший елемент матриці: " << p << endl;
    cout << "Його координати: " << endl;
    cout << "Рядок: " << x << endl;
    cout << "Стовпець: " << y << endl;
    cout << endl;
}