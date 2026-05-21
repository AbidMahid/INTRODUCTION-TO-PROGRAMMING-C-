#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void input() {
        cin >> name >> age;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}
