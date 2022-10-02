/* Copyright(C) 2022, Anton Fesenko 202-TH №23

У завданні реалізовані функції або методи повинні генерувати відповідні виключення. 
Обробку виключень потрібно виконувати головною функцією, яка повинна демонструвати обробку всіх перехоплених виключень.

Завдання 3
Функція обчислює периметр трикутника. */

#include <iostream>
#include <windows.h>
using namespace std;

float perim(float a, float b, float c);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        float a = perim(3, 4, 5);
        cout << "Периметр трикутника дорівнює " << a << " см." << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    
    return 0;
}

float perim(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0)
        throw "Сторона не може бути менше або дорівнювати 0!";
    else if (a + b < c || a + c < b || b + c < a)
        throw "Не виконується умова існування трикутника :(";

    return a + b + c;
}