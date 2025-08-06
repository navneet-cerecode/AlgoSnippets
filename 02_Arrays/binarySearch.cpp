// BasicBinarySearch.cpp
// Binary Search on a sorted array
// Time Complexity: O(log n), Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;  // Found at index mid
        else if (arr[mid] < target)
            left = mid + 1;  // Search right half
        else
            right = mid - 1; // Search left half
    }

    return -1; // Target not found
}