#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are different, they can't be anagrams
        if (s.size() != t.size()) {
            return false;
        }

        // Single map for counting
        unordered_map<char, int> countMap;
        for (char c : s) {
            countMap[c]++;
        }
        for (char c : t) {
            countMap[c]--;
        }

        // Check if all counts are zero
        for (auto& entry : countMap) {
            if (entry.second != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    string s = "anagram";
    string t = "nagaram";

    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams!" << endl;
    } else {
        cout << "The strings are not anagrams!" << endl;
    }

    return 0;
}
