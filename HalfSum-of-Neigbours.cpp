#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;

    float array[100];
    float result[100];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
        result[i] = array[i];
    }

    for (int i = 1; i < size - 1; i++) {
        result[i] = (array[i - 1] + array[i + 1]) / 2;
    }

    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

}