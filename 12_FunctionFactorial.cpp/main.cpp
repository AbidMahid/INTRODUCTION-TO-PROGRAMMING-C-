#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    cout << "Factorial = " << fact(5);
    return 0;
}
