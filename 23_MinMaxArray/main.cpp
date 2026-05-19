#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 7, 2, 9, 5};
    int minVal = arr[0], maxVal = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal;

    return 0;
}
