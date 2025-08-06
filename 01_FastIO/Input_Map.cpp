#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        string key;
        int value;
        cin >> key >> value;
        mp[key] = value;
    }

    for (auto& [key, value] : mp)
        cout << key << ": " << value << endl;

    return 0;
}
