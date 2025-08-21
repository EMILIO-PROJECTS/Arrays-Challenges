#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;

    int array[100];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int last = array[size - 1];

    for (int i = size - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }

    array[0] = last;

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

}