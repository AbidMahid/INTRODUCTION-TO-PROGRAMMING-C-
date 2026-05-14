#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int key;

    cout << "Enter number: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
