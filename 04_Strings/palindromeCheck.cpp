// Checks if a string is a palindrome
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        ++left;
        --right;
    }
    return true;
}

int main() {
    string s = "racecar";

    if (isPalindrome(s))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
