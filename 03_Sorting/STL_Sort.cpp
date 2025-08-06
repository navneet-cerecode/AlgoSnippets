// STL_Sort.cpp
// Time Complexity: O(n log n) (introsort - hybrid of quick, heap, and insertion sort)
// Space Complexity: O(log n)
// Not guaranteed to be stable (use stable_sort for stable behavior)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator (optional)
bool customCompare(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 9};

    // Default ascending sort
    sort(arr.begin(), arr.end());

    // Uncomment for descending sort
    // sort(arr.begin(), arr.end(), customCompare);

    // Uncomment for stable sort (stable by value position)
    // stable_sort(arr.begin(), arr.end());

    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
