#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> ump;
    for (int i = 0; i < n; ++i) {
        string key;
        int value;
        cin >> key >> value;
        ump[key] = value;
    }

    for (auto& [key, value] : ump)
        cout << key << ": " << value << endl;

    return 0;
}
