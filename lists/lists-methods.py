#  List Method .remove()
    #removes the argument from the list
groceryList = ["Chips", "Dip", "Pencils", "Micro SD Card"]
groceryList.remove("Chips")
print(groceryList)

# List Method .count()
    # searches the list for argument then returns the number of matching entries found
schoolSupplies = ["Pencils", "Pens", "Paper", "Pens", "Laptop", "erasers"]
numPens = schoolSupplies.count("pens")
print(numPens)

# List Method .sort()
    # sorts numerical lists in ascending order and string lists are sorted into alphabetical order
    # modifies original list and does not have a return value
schoolSupplies.sort()

# List Method .insert()
    # takes in two inputs: index that you insert into and the element that you want to insert into the specified index
line = ["Amanda", "Darla", "Martin", "Isabelle"]
line.insert(2, "Derrick")

# List Method .pop()
    # removes an element from a list and returns it
    # optional argument of the index to remove, if no index provided then the last element is removed and returned
highSchoolClasses = ["Algebra", "Calculus", "Biology", "Chemistry", "Art"]
highSchoolClasses.pop()
    # removes Art 


