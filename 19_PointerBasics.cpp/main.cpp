#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Value: " << x << endl;
    cout << "Address: " << p << endl;
    cout << "Dereferenced: " << *p << endl;

    return 0;
}
