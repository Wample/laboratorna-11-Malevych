#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;
void Zavd1()
{
    int A;
    int result = 0;
    int num = 0;
    int numbers[] = { 2, 5, 7,13, 23,25,28,30,45,67,80,90,120,154,600,678 };
    cout << "Введіть значення А: " << endl;
    cin >> A;
    while (num < 17)
    {
        if (numbers[num] > A)
        {
            result = result + 1;
            num++;
        }
        if (numbers[num] < A)
        {
            num++;
        }
        if (numbers[num] == A)
        {
            num++;
            result--;
        }
    }

    cout << "В заданому масиві " << result << " елементів більших за " << A << endl;

}
void Zavd2()
{
    int array1[] = { 1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6 };
    int s1 = sizeof(array1) / sizeof(array1[0]);
    int a = 0;

    cout << "Початковий масив: ";

    for (int i = 0; i < s1; i++)
        cout << array1[i] << " ";
    cout << endl;

    for (int i = 0; i < s1; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (array1[i] == array1[j])
                break;

        if (i == j)
            a++;

    }
    cout << endl;

    cout << "У даному масиві " << a << " унікальних елементів" << endl;
}
void Zavd3()
{
    int array[] = { 3, 5, 8, 0, -10, 43, 65, 23, -12, 5, 3, 0, 7, -5 };
    int result1 = 1;
    int i = 0;
    int j = 0;
    int indicator = 0;
    int sum1 = 0;

    cout << endl;
    cout << "Початковий масив: ";
    while (j < 14)
    {
        i = array[j];
        cout << array[j] << " ";
        if ((j % 2) == 0)
        {
            result1 = result1 * array[j];
        }

        j++;
    }
    j = 0;
    cout << endl;
    while (j < 14)
    {
        i = array[j];
        if (array[j] == 0 && indicator == 0)
        {
            indicator = 1;
            j++;
        }
        else if (array[j] == 0 && indicator == 1)
        {
            indicator = 0;

        }
        if (indicator == 1)
        {
            sum1 = sum1 + array[j];
        }

        j++;
    }

    cout << endl;

    cout << "Добуток елементів з парними номерами: " << result1 / 2 << endl;
    cout << "Сума елементів розташованих між першим і останнім нульовим елементом: " << sum1 << endl;
    cout << "Перетворений масив: ";

    j = 0;
    while (j < 14)
    {
        i = array[j];
        if (array[j] >= 0)
        {
            cout << array[j] << " ";
        }

        j++;
    }
    j = 0;
    while (j < 14)
    {
        i = array[j];
        if (array[j] < 0)
        {
            cout << array[j] << " ";
        }

        j++;
    }

    cout << endl;
    cout << endl;

}
void Zavd4()
{
    int array[] = { 4, 1, 6, 4, 7, 8, -3, 6, 56, 60, 24, 5, -9, 2 };
    int i = 0;
    int j = 0;
    int result;
    int sum2 = 0;
    int indicator = 0;

    cout << endl;
    cout << "Початковий масив: ";

    while (j < 14)
    {
        i = array[j];

        cout << array[j] << " ";

        j++;
    }
    cout << endl;
    cout << endl;
    j = 0;
    while (j < 14)
    {
        i = array[j];

        if ((j % 2) != 0)
        {
            cout << "result" << endl;
        }

        j++;
    }
    j = 0;
    while (j < 14)
    {
        i = array[j];

        if (array[j] < 0 && indicator == 0)
        {
            indicator = 1;
            j++;
        }
        else if (array[j] < 0 && indicator == 1)
        {
            indicator = 0;
        }
        if (indicator == 1)
        {
            sum2 = sum2 + array[j];
        }


        j++;
    }
    cout << "Сума елементів масиву з непарними номерами: " << endl;
    cout << "Сума елементів масиву, розташованих між першим і останнім від’ємними елементами: " << sum2 << endl;
    cout << "Перероблений масив: ";

    j = 0;
    while (j < 14)
    {
        i = array[j];

        if (abs(array[j]) < 1)
        {
            cout << "0 ";
        }
        else if (abs(array[j]) >= 1)
        {
            cout << array[j] << " ";
        }


        j++;
    }
    cout << endl;
    cout << endl;

}
void Zavd5()
{
    int array[] = { 3, -6, 0, -5, 9, 0, 12, 59, -34, 8, 0, 3, -6, 0, 3, 58 };
    int j = 0;
    int max = 0;
    int p = 0;
    int sum4 = 0;
    int indicator = 0;

    cout << endl;
    cout << "Початковий масив: ";
    while (j < 16)
    {
        cout << array[j] << " ";
        j++;
    }
    cout << endl;
    cout << endl;

    j = 0;
    p = abs(array[j]);
    while (j < 16)
    {
        if (abs(array[j]) > p)
        {
            p = abs(array[j]);
        }
        else
        {
            p = p;
        }
        j++;
    }
    max = p;
    j = 0;
    while (j < 16)
    {
        if (array[j] >= 0 && indicator == 0)
        {
            indicator = 1;
            j++;
        }
        else if (array[j] >= 0 && indicator == 1)
        {
            indicator = 0;
        }
        if (indicator == 1)
        {
            sum4 = sum4 + array[j];
        }
        j++;
    }



    cout << "Максимальний за модулем елемент масиву: " << max << endl;
    cout << "Сума елементів масиву, розташованих між першим і другим додатними елементами: " << sum4 << endl;
    cout << "Перетворений масив: ";

    j = 0;
    indicator = 0;
    while (j < 16)
    {
        if (array[j] != 0)
        {
            cout << array[j] << " ";
        }
        else if (array[j] == 0)
        {

        }
        j++;
    }
    indicator = 1;
    j = 0;
    while (j < 16)
    {
        if (array[j] == 0 && indicator == 1)
        {
            cout << array[j] << " ";
        }
        j++;
    }
    cout << endl;
    cout << endl;
}
void Zavd6()
{
    int array[] = { 3, 0, 4, 2, 5, 24, 7, 6, 4, -5, 0, 68, 0, 55, 8 };
    int number = 0;
    int j = 0;
    int p = 0;
    int sum3 = 0;
    int indicator = 0;
    int a = 0;
    int i = 0;
    int k = 0;

    cout << endl;
    cout << "Початковий масив: ";

    j = 0;

    while (j < 15)
    {
        cout << array[j] << " ";
        j++;
    }

    j = 0;
    while (j < 15)
    {
        if (array[j] == 0)
        {
            number++;
        }
        j++;
    }
    j = 0;
    while (j < 15)
    {
        if (array[j] < p && indicator == 0)
        {
            indicator = 1;
            j++;
        }
        if (indicator == 1)
        {
            sum3 = sum3 + array[j];
        }
        j++;
    }


    cout << endl;
    cout << endl;
    cout << "Кількість елементів рівних нулю: " << number << endl;
    cout << "Сума елементів масиву, розташованих після мінімального елемента: " << sum3 << endl;
    cout << "Упорядкований масив: ";

    j = 0;
    p = 15;
    while (j < 15)
    {
        cout << array[j] << " ";
        j++;
    }
    cout << endl;
    cout << endl;
}
int main()
{

    int number;

    cout << "Введіть номер задачі: " << endl;
    cin >> number;

    if (number == 1)
    {
        Zavd1();
    }
    else if (number == 2)
    {
        Zavd2();
    }
    else if (number == 3)
    {
        Zavd3();
    }
    else if (number == 4)
    {
        Zavd4();
    }
    else if (number == 5)
    {
        Zavd5();
    }
    else if (number == 6)
    {
        Zavd6();
    }
    else
    {
        cout << "Такої задачі не існує!" << endl;
    }

}