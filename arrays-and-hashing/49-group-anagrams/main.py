class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        anagrams = {}
        for i in strs:
            key = ''.join(sorted(i))

            if key in anagrams:
                anagrams[key].append(i)
            else:
                anagrams[key] = [i]
        return list(anagrams.values())


solution = Solution()
strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
print(solution.groupAnagrams(strs))

# Steps:
# 1 - Initialize an empty dictionary to store the anagram groups.
# 2 - For each string:
#         - Compute its signature (either by sorting the string or using a character frequency count).
#         - Check if the signature is already in the dictionary:
#             - If it is, append the current string to the list associated with that signature.
#             - If not, create a new list and add the string to it.
# 3 - After processing all strings, the dictionary will contain all the groups of anagrams.