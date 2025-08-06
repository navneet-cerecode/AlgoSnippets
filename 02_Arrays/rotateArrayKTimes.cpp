// Rotates an array to the right by k positions
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

void rotateRightSimple(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;

    k = k % n; // Handle k > n

    vector<int> result(n);

    for (int i = 0; i < n; ++i) {
        // Place each element in its rotated position
        result[(i + k) % n] = arr[i];
    }

    arr = result; // Copy back to original array
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    rotateRightSimple(arr, k);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}
