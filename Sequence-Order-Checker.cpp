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

    bool ascending = true;
    bool descending = true;

    for (int i = 1; i < size; i++) {
        if (array[i] <= array[i - 1]) ascending = false;
        if (array[i] >= array[i - 1]) descending = false;
    }

    if (ascending)
        cout << "Ascending" << endl;
    else if (descending)
        cout << "Descending" << endl;
    else
        cout << "Neither" << endl;
    
}
