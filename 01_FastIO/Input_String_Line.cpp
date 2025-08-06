#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cin.ignore(); // if previous input exists
    getline(cin, line);

    cout << "Line: " << line << endl;
    return 0;
}