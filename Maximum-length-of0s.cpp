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
    int maximum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            count++;
            if (count > maximum) {
                maximum = count;
            }
        } else {
            count = 0;
        }
    }
    cout << "Length of Maximum Consecutive Zeros: " << maximum << endl;

}