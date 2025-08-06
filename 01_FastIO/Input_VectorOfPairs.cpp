#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; ++i)
        cin >> vp[i].first >> vp[i].second;

    for (auto& p : vp)
        cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;

    return 0;
}