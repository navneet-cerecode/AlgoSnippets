// SelectionSort.cpp
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Not a stable sort

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;

        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[minIdx])
                minIdx = j;

        if (minIdx != i)
            swap(arr[i], arr[minIdx]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
