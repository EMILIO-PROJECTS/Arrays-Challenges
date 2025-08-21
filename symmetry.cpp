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

    bool symmetry = true;
    for (int i = 0; i < size; i++) {
        if (array[i] != array[size - i - 1]) {
            symmetry = false;
            break;
        }
    }

    if (symmetry) {
        cout << "Symmetrical" << endl;
    } else {
        cout << "Not Symmetrical" << endl;
    }

}