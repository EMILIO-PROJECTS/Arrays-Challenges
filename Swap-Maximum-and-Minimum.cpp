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

    int maximum = 0;
    int minimum = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[maximum]) maximum = i;
        if (array[i] < array[minimum]) minimum = i;
    }

    array[maximum] = array[maximum] + array[minimum];
    array[minimum] = array[maximum] - array[minimum];
    array[maximum] = array[maximum] - array[minimum]; 

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

}