// ## 🔹 Problem: Remove Element

// 🔗 Link: https://leetcode.com/problems/remove-element/
// 💡 Difficulty: Easy

// ---

// ## 🧠 Algorithm (Step-by-Step)

// 1. **Initialize `k = 0`**

//    * `k` pointer use hota hai next valid position track karne ke liye
//    * Ye batata hai kaha next non-`val` element place hoga

// 2. **Traverse the array**

//    * Loop run karo from `i = 0` to `n-1`

// 3. **Check condition**

//    * Agar `nums[i] != val` hai → is element ko rakhna hai

// 4. **Place element at correct position**

//    * `nums[k] = nums[i]`
//    * Matlab valid element ko front side me shift kar rahe ho

// 5. **Increment pointer `k`**

//    * Next valid position ke liye `k++`

// 6. **Return result**

//    * `k` return karo
//    * Ye count hai elements ka jo `val` ke equal nahi hai

// ---

// ## ⚡ Approach (Two Pointer)

// * Ek pointer (`i`) traverse karta hai array ko
// * Dusra pointer (`k`) maintain karta hai valid elements ka position
// * In-place operation (extra space use nahi hota)

// ---

// ## ⏱️ Complexity Analysis

// * **Time Complexity:** O(n)
// * **Space Complexity:** O(1)

// ---

// ## 💡 Key Learning

// * Two pointer technique in-place modification ke liye useful hoti hai
// * Array shifting avoid karne ke liye overwrite method use kiya
// * Space optimize karne ka best example

// ---

// ## ❗ Mistakes / Edge Cases

// * Empty array handle karna
// * All elements equal to `val`
// * No element equal to `val`

// ---

// ## ✅ Code (C++)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = sol.removeElement(nums, val);
    cout << "New length: " << k << endl;
    for(int i=0; i<k; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}



// ## 🚀 Summary

// * Problem = Remove `val` in-place
// * Technique = Two Pointer
// * Result = Return count of valid elements


