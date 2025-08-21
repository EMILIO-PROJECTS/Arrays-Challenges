#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;
    int localMin = 0;
    int localMax = 0;

    int array[100];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    for (int i = 1; i < size - 1; i++) {
        if (array[i] < array[i - 1] && array[i] < array[i + 1])
            localMin++;
        if (array[i] > array[i - 1] && array[i] > array [i + 1]) {
            localMax++;
        }
    }

    cout << "Local Minima: " << localMin << endl;
    cout << "Local Maxima: " << localMax << endl;

}