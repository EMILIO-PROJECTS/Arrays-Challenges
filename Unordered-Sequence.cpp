#include <iostream>
using namespace std;

int main() {

    system("cls");

    int size;
    cin >> size;
    int distinct = 0;

    int array[100];
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        bool New = true;
    for (int j = 0; j < i; j++) {
        if (array[i] == array[j]) {
            New = false;
            break;
        }
    }
    if (New) distinct++;
    }
     
    cout << "Distinct Elements: " << distinct << endl;
}
