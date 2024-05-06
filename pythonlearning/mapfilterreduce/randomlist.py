#!/usr/bin/python3
import random

# create the list
ht_list = []

# fill list
for i in range(0, 100):
    ht_list += random.choice(['H', 'T'])

# output
print("Heads: ", ht_list.count('H'))
print("Tails: ", ht_list.count('T'))