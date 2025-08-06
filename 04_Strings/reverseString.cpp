// ReverseString.cpp
// Reverses a string in-place
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
#include <algorithm> // for reverse
using namespace std;

int main() {
    string s = "hello";

    // Method 1: Using STL
    reverse(s.begin(), s.end());

    // Method 2: Manual two-pointer (uncomment if needed)
    // int left = 0, right = s.length() - 1;
    // while (left < right) {
    //     swap(s[left], s[right]);
    //     ++left;
    //     --right;
    // }

    cout << "Reversed string: " << s << endl;
    return 0;
}
