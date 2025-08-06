#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strList(n);
    for (int i = 0; i < n; ++i)
        cin >> strList[i];

    for (string& s : strList)
        cout << s << " ";
    cout << endl;

    return 0;
}