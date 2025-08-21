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

    int value;
    cin >> value;

    int lastIndex;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            lastIndex = i;
            found = true;
        }
    }
    if (found)
        cout << "Last Occurrence Index: " << lastIndex << endl;
    else
        cout << "Not Found" << endl;

}