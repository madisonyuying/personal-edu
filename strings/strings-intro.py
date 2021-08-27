# Strings 
print("This is a string!")
print('This is a string too')
print("This is a string that says \"Hello World\"")

# to determine if a letter or a substring exists in a string use the in syntax
name = "Madison"
print("n" in name )
    # prints true 

# Strings can be indexed just like lists.
name[0] # m 

# iterating through strings with for
for letter in name: 
    print(letter)

# len() function   
lengthName = len(name)
    # outputs 7 

# string concatenation 
x = "Hello"
y = "! How are you?"
greeting = x + y

# Once a string has been defined it cannot be changed: Immutable 

# Index error 
    # produced when you try to accesss an index that does not exist

