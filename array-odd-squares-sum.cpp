//Программа вычисляющая сумму квадратов,
//нечётных элементов целочисленного массива из 20 элементов.

#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <sstream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    const int size = 20;
    int array[size]; 
    int sumOfSquares = 0;

    srand(static_cast<unsigned int>(time(0))); 

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101 - 50; 
    }
    
    system("echo Программа, которая вычисляет сумму квадратов нечётных элементов целочисленного массива из 20 элементов.");
    system("echo Массив содержит случайные значения в диапазоне от -50 до 50.");
    cout << endl << endl;

    stringstream generatedArray;
    generatedArray << "Сгенерированный массив: ";
    for (int i = 0; i < size; i++) {
        generatedArray << array[i] << " ";
    }
    
    system(("echo " + generatedArray.str()).c_str());

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) { 
            sumOfSquares += array[i] * array[i]; 
        }
    }

    stringstream sumSquaresMessage;
    sumSquaresMessage << "Сумма квадратов нечётных элементов: " << sumOfSquares;

    system(("echo " + sumSquaresMessage.str()).c_str());

    system("pause");
    return 0;
}
