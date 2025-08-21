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
    int count = 1;
    int maximum = 1;
    
    for (int i = 1; i < size; i++) {
        if (array[i] > array[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maximum) {
            maximum = count;
            }
}
cout << "Length of Largest Ascending Portion: " << maximum - 1 << endl;

}