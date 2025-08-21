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

    int count = 0;
    for (int i = 0; i < size; i += 2) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;

}