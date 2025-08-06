#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "competitive";

    // 1️⃣ Reverse
    reverse(s.begin(), s.end());

    // 2️⃣ Sort
    sort(s.begin(), s.end());

    // 3️⃣ Frequency count (for lowercase only)
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;

    // 4️⃣ Remove duplicates (sorted only)
    s.erase(unique(s.begin(), s.end()), s.end());

    // 5️⃣ Substring
    string sub = s.substr(2, 4); // from index 2, length 4

    // 6️⃣ Find substring
    size_t pos = s.find("pet");
    if (pos != string::npos)
        cout << "'pet' found at index: " << pos << endl;

    // 7️⃣ Next permutation
    next_permutation(s.begin(), s.end());

    // ✅ Output final string
    cout << "Final string: " << s << endl;
    return 0;
}
