// Must-know STL functions and tricks for arrays/vectors in competitive programming

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>   // for accumulate()
using namespace std;

int main() {
    vector<int> arr = {5, 1, 3, 4, 2};

    // 1️⃣ Sort array
    sort(arr.begin(), arr.end());

    // 2️⃣ Sort in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // 3️⃣ Reverse array
    reverse(arr.begin(), arr.end());

    // 4️⃣ Find max and min elements
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());

    // 5️⃣ Sum of all elements
    int sum = accumulate(arr.begin(), arr.end(), 0);

    // 6️⃣ Find if an element exists
    bool found = binary_search(arr.begin(), arr.end(), 3); // works only on sorted arrays

    // 7️⃣ Index of first occurrence of element (lower_bound)
    auto it = lower_bound(arr.begin(), arr.end(), 3); // returns iterator
    if (it != arr.end() && *it == 3)
        cout << "Index of 3: " << it - arr.begin() << endl;

    // 8️⃣ Count occurrences of an element
    int cnt = count(arr.begin(), arr.end(), 3);

    // 9️⃣ Remove duplicates (sorted array only)
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    // 🔟 Rotate array (left by 2 positions)
    rotate(arr.begin(), arr.begin() + 2, arr.end());

    // 1️⃣1️⃣ Next permutation
    next_permutation(arr.begin(), arr.end());

    // 1️⃣2️⃣ Previous permutation
    prev_permutation(arr.begin(), arr.end());

    // ✅ Print final array
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
