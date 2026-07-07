#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    vector<int> originalArray(n);
    vector<int> transformedArray(n);

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> originalArray[i];
        transformedArray[i] = sumOfDigits(originalArray[i]);
    }
    int minElement = *min_element(transformedArray.begin(), transformedArray.end());
    int maxElement = *max_element(transformedArray.begin(), transformedArray.end());
    cout << "Исходный массив: ";
    for (int elem : originalArray)
        cout << elem << " ";
    cout << endl;
    cout << "Преобразованный массив: ";
    for (int elem : transformedArray)
        cout << elem << " ";
    cout << endl;
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Максимальный элемент: " << maxElement << endl;

    return 0;
}

