#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> jagged(n);
    for (int i = 0; i < n; ++i) {
        int len;
        cin >> len;
        jagged[i].resize(len);
        for (int j = 0; j < len; ++j)
            cin >> jagged[i][j];
    }

    for (auto& row : jagged) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}