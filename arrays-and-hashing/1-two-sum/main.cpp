#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // Stores {number: index}
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // If complement exists in map, return its index and current index
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }

            // Otherwise, store current number and its index
            seen[nums[i]] = i;
        }
        
        return {}; // No solution found (should not happen as per problem constraints)
    }
};
