// ReverseArray.cpp
// Reverses a given array in-place
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        ++left;
        --right;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr);

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
