#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> us;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        us.insert(x);
    }

    for (int x : us)
        cout << x << " ";
    cout << endl;

    return 0;
}
