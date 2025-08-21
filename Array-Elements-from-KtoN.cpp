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

    int start = K - 1;
    int end = size - 1;

    while (start < end) {
        int element = array[start];
        array[start] = array[end];
        array[end] = element;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

}