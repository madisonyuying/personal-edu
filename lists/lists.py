# Lists are ordered sets of data, lists are placed in square brackets [] and values are separated by commas (,)
    # it is good practice to place a space in between comma and next value
daysWeek = ["monday", "tuesday", "wednesday", "thursday", "friday"]
print(daysWeek)

# lists can contain different data types: numbers, strings, other objects, and other lists

# List method.append
daysWeek.append("saturday")
    # .append adds the values to the end of an existing list


# add lists together by using addition (+)
sunday = ["sunday"]
allDays = daysWeek + sunday 

# index lists: python starts index at zero 
# access list elements by indexing list[index]
allDays[0] # monday
# Negative list indices 
allDays[-1]     #selects last element: sunday
allDays[-2:]    # selects the last two elements in the list: saturday sunday
allDays[:-1]    # selects everything but the last element 
