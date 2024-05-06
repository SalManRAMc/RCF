#!/usr/bin/python3
import math
def mult_by_2(num):
    return num * 2


times_two = mult_by_2   # you can rename functions!
def do_math(func, num):
    """ You can put a function inside a function """
    return func(num)


def get_func_mult_by_num(num : int):  # dynamic function definition

    def multiply_by(value):
        return num * value
    
    return multiply_by

def is_it_odd(num):
    if num % 2 == 0:
        return False
    else:
        return True


def is_list_odd(list, func):

    oddList = []
    for i in list:
        if func(i):
            oddList.append(i)
    
    return oddList


aList = range(1, 20)  # use of range object
listOfFuncs = [times_two, get_func_mult_by_num]
print("8 * 2 =", do_math(mult_by_2, 8))

print("4 * 2 =", times_two(4))

print(get_func_mult_by_num.__annotations__)

print("5 * 10 =", get_func_mult_by_num(5)(10))  # dynamic function call yaaaay

print("5 * 9 =", listOfFuncs[1](5)(9))  # calling a function by index in a list (like variadic functions in c!)

print(is_list_odd(aList, is_it_odd))