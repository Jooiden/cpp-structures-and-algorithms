#include <iostream>
#include <iomanip>
#include <algorithm>
#include <windows.h>
#include <sstream>

using namespace std;

void printMatrix(double matrix[5][5], int rows, int cols) {
    cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "[" << matrix[i][j] << "]\t";
        }
        cout << endl; 
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    const int rows = 5;
    const int cols = 5;
    double matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = static_cast<double>(rand()) / RAND_MAX * 100; 
        }
    }

    system("echo ѕрограмма, котора€ формирует матрицу с рандомными значени€ми, размером 5 на 5,");
    system("echo и упор€дочивает строки матрицы по возрастанию.");
    cout << endl<<endl;
    
    system("echo —лучайна€ матрица:");
    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        std::sort(matrix[i], matrix[i] + cols);
    }
    cout << endl;
    system("echo ќтсортированна€ матрица:");
    printMatrix(matrix, rows, cols);

    system("pause");

    return 0;
}
