# For Loop
    # used to iterate over a list of items and perform a set of actioins on each item
    # when writing a for loop, remember to properly indeent each action 
    # wrong indentation yields an indentation error 
# for <temporary variable> in <list variable>:
    # <action statement>
    # <action statement>
nums = [1, 2, 3, 4, 5]
for num in nums:
    print(num)

# Break key word 
    # break escapes loops regardless of the iteration number
numbers = [0, 1, 2, 3, 4, 5]
for number in numbers :
    if (number>0):
        print("Positive number")
        break
    print(number)

# Continue key word
    # used inside a loop to skip the remaining code inside the code block and begin the next loop iteration
numberList = [ -1, -2, -5 , -8, 9 , 7, 5, 1, 2]
for number in numberList:
    if number < 0:
        continue
    print(number)

# range() function
    # can be used to specify rhe number of iterations in a for loop

# List comprehension
    # provides a concise way for creating lists
    # [EXPRESSION for ITEM in LIST <if CONDITIONAL>]
answer = [x**3 for x in range(15) if x % 2 == 0]

# While loops 
    # repeatedly executes a code block as long as the condition evaluates to true
    # if the condition is not initially met then the code will never run
sad = True
while sad:
    print("I am sad")
    sad = False
i = 12
while i < 13 :
    print(i)
    i = i + 1
    # this loop will run once

# Nested Loops
    # loops within other loops 
groups = [["madison", "patrick"],[ "kevin", "matthew"]]
for group in groups:
    # for group in groups iterates over each list in groups
    for name in group:
        print(name)
        # for name in group iterates over each name in group 
# Infinite loops never terminate. conditions of the loop prevent it from terminations, could be from a typo, or an incorrect statement
    # to interrupt loop press Ctrl and C keys together 