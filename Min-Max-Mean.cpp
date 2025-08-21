#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    int x;
    cin >> size;

    int array[100];
    int sum = 0;
    int minimum = 1001;
    int maximum = -1001;

    for (int i = 0; i < size; i++) {
        cin >> array[i];
        sum += array[i];
        if (array[i] < minimum) minimum = array[i];
        if (array[i] > maximum) maximum = array[i];
    }

    cin >> x;

    float mean = sum / (float)size;

    float dMin = x - minimum; if (dMin < 0) dMin = -dMin;
    float dMax = x - maximum; if (dMax < 0) dMax = -dMax;
    float dMean = x - mean; if (dMean < 0) dMean = -dMean;

    if (dMin <= dMax && dMin <= dMean)
        cout << "Minimum" << endl;
    else if (dMax <= dMin && dMax <= dMean)
        cout << "Maximum" << endl;
    else
        cout << "Mean" << endl;

}