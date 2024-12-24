#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for (int num : nums) {
            if (numSet.find(num) != numSet.end()) {
                return true;
            }
            numSet.insert(num);
        }
        return false;
    }
};

int main() {
    Solution solution;

    // Test case 1: Contains duplicates
    vector<int> nums1 = {1, 2, 3, 1};
    cout << boolalpha << solution.containsDuplicate(nums1) << endl;  // Output: true

    // Test case 2: No duplicates
    vector<int> nums2 = {1, 2, 3, 4};
    cout << boolalpha << solution.containsDuplicate(nums2) << endl;  // Output: false

    return 0;
}