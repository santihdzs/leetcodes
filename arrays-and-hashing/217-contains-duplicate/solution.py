class Solution(object):
    def containsDuplicate(self, nums):
        numset = set()
        for i in nums:
            if i in numset:
                return True
            else:
                numset.add(i)
        
        return False

# More efficient solution:  
# return len(set(nums)) != len(nums)


# Explanation:

# - We could brute force the solution by duplicating the list and checking
# term by term O(n^2)

# - We can also check for duplicates by using sets
# sets cant have duplicates, converting to set removes duplicates if there are any
# if duplicates were removed, set length is different than list length