#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        
        for (const string& s : strs) {
            string sorted_s = s;  // Make a copy of the string
            sort(sorted_s.begin(), sorted_s.end());  // Sort the string
            
            anagrams[sorted_s].push_back(s);  // Group anagrams together
        }
        
        vector<vector<string>> result;
        for (auto& entry : anagrams) {
            result.push_back(entry.second);  // Collect all the anagram groups
        }
        
        return result;
    }
};



int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> result = solution.groupAnagrams(strs);
    
    for (const auto& group : result) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}
