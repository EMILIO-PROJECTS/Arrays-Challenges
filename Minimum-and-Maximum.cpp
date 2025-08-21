#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;

    int array[100];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int minimum = array[0];
    int maximum = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < minimum) minimum = array[i];
        if (array[i] > maximum) maximum = array[i];
    }

    cout << "minimum = " << minimum << ", maximum = " << maximum << endl;

}