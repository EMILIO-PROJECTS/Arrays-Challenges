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

    int positive[100];
    int negative[100];
    int p = 0;
    int n = 0;

     for (int i = 0; i < size; i++) {
        cin >> array[i];
        if (array[i] >= 0) {
            positive[p++] = array[i];
        } else {
            negative[n++] = array[i]; 
        }
    }

    for (int i = 0; i < p; i++) cout << positive[i] << " ";
    for (int i = 0; i < n; i++) cout << negative[i] << " ";
    cout << endl;

}