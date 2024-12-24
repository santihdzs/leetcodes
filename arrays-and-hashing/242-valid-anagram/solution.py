from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)




# Collections is a standard python library, counter is a class in the collections library.
# Acts like specialized dictionary for counting hashable objects (strings, numbers, or other immutable types)
# Automatically counts the occurrences of each element in an iterable (like a list or string) and stores them as key-value pairs where:

# Key: The element from the iterable.
# Value: The count of occurrences of that element.