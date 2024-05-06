#!/usr/bin/python3

# Lambda functions are like def functions but differet
# The syntax is as follows:  Lambda arg1, arg2 .... : expression
# Glorified Maths basically

sum = lambda x, y: x + y  # renames of a lambda function
print("Sum :", sum(4, 5))
# why use lambda? To write short functions without junking up 
# your code with temporary function names that may cause conflicts and sumsuch