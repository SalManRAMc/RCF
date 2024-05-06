#!/usr/bin/python3
import random

print(list(filter(lambda x: x % 2 == 0, range(1, 11))))

# take a function that applies a filter
# take a range, list or whatever to which apply the filter to 
# filter returns the result
randlist = []
for i in range(100):
    randlist.append(random.randint(1, 1001))

"""This function can also be rewritten using the list constructor"""

randlist2 = list(random.randint(1, 1001) for i in range(100))
print(list(filter(lambda x: x % 9 == 0, randlist)))
print(list(filter(lambda x: x % 9 == 0, randlist2)))