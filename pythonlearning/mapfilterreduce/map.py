#!/usr/bin/python3
oneto10 = range(1, 11)

def doubl_num(num):
    return num * 2


print(list(map(doubl_num, oneto10)))

# map allows you to execute a function on each element
# of a list (or multiple lists)
alist = list(map((lambda x, y : x + y), [1, 2, 3], [1, 2, 3]))

print(alist)