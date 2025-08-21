#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;

    int array[100];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int K, L;
    cin >> K >> L;

    int start = K - 1;
    int end = L - 1;

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