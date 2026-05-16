#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");

    file << "Hello File!";
    file.close();

    cout << "Data written to file";

    return 0;
}
