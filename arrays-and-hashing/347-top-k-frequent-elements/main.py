class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        frequency = {}

        for i in nums:
            frequency[i] = frequency.get(i, 0) + 1
        
        sorted_items = sorted(frequency.items(), key= lambda x: x[1], reverse = True)
        return [item[0] for item in sorted_items[:k]]

# 1 - Create empty dictionary for number-frequency pairs
# 2 - For i in number: if number in dictionary, add 1 to frequency key i[i]
# 3 - If num not in dict, add to dict, frequency = 0 (default), add 1
# 4 - Sort frequency keys from highest to lowest, sorted() function works well for smaller lists,
# but heap sort or bucket sort are better for larger lists. (lambda function used to select keys to sort)
# 5 - Return item[0] in sorted_items[:k] (nums with most freq)