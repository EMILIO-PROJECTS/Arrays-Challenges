#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;

    int array[1000];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    bool isAritmetic = true;
    int difference = array[1] - array[0];

    for (int i = 2; i < size; i++) {
        if (array[i] - array[i - 1] != difference) {
            isAritmetic = false;
            break;
        }
    }
    if (isAritmetic ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}