// InsertionSort.cpp
// Time Complexity: O(n^2), Best Case: O(n)
// Space Complexity: O(1)
// Stable Sort

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr);

    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
