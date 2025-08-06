// Checks if two strings are anagrams
// Time Complexity: O(n log n) or O(n)
// Space Complexity: O(1) extra (or O(26) with freq array)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string a, string b) {
    if (a.length() != b.length()) return false;

    // Method 1: Sort both strings
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main() {
    string s1 = "listen", s2 = "silent";

    if (areAnagrams(s1, s2))
        cout << "Anagrams" << endl;
    else
        cout << "Not Anagrams" << endl;

    return 0;
}
