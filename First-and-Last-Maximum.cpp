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

    int maxVal = array[0];
    int first = 0;
    int last = 0;
    int count = 1;

    for(int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
            first = i;
            last = i;
            count = 1;
        } else if (array[i] == maxVal) {
            last = i;
            count++;
        }
    }

    cout << "The maximum element is: " << maxVal << endl;
    cout << "The number of occurrences of the maximum element is: " << count << endl;
    cout << "The position of the first maximum element is: " << first << endl;
    cout << "The position of the last maximum element is: " << last << endl;

}