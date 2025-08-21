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

    for (int i = 0; i <= size - 10; i++) {
        bool occurence = true;
        for (int j = 0; j < 10; j++) {
            if (array[i + j] != j + 1) {
                occurence = false;
                break;
            }
        }
        if (occurence) count++;
    }
    cout << "Occurrences of Subsequence: " << count << endl;

}