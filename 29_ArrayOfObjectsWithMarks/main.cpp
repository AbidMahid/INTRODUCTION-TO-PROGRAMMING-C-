#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cin >> s[i].name >> s[i].marks;
    }

    for (int i = 0; i < 3; i++) {
        cout << s[i].name << " " << s[i].marks << endl;
    }

    return 0;
}
