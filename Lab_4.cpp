#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int arr[SIZE] = { 15, 22, 3, 9, 7, 33, 19, 41, 45, 8 };

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int start = min(minIndex, maxIndex);
    int end = max(minIndex, maxIndex);

    int count = end - start - 1;

    cout << "Кількість елементів між мінімальним і максимальним значеннями: " << count << endl;

    return 0;
}
