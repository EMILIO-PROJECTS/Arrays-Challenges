#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;

    int array[100];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int K;
    cin >> K;

    for (int i = 0; i < K / 2; i++) {
        int element = array[i];
        array[i] = array[K - 1 - i];
        array[K - 1 - i] = element;
    }
    
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

}