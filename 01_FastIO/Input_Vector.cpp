#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    for (int val : vec)
        cout << val << " ";
    cout << endl;

    return 0;
}


