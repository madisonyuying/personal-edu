# METHODS 

# .format() method 
# replaces empty placeholders {} with arguments 
string1 = "I am {} years old."
string1.format(19)
    # I am 19 years old.

# .lower() method 
# removes uppercase letters
string2 = "Hi. How Are You?"
string2.lower()
    # hi. how are you?

# .strip() method 
# removes characteres from beginning and end of a string
string3 = "          i am hungry    "
string3.strip()
    # removes the whitespace 
    # if an argument is put in place then the .strip method will remove the argument 
string4 = ".......++++..... i like sour gummy bears ..............+......."
string4.strip(".+")

# .title() method 
# puts string in title case
string5 = " my name is madison "
string5.title()
    # My Name Is Madison

# .split method 
# if no argument splits at white space
string6 = "I have a bird named Sunny"
string6.split()
    # ["I", "have", "a", "bird", "named", "Sunny"]
# argument passed then the argument is used as a delimiter to split the string 
string7 = "watermelon"
string7.split("m")
    # ["water", "elon"]

# .find() method 
# returns index of first occurance of argument string; if no occurrence found then -1 returned 
dogName = "kevin"
dogName.find("k")
    # 0

# .replace method 
# replaces occurence of first argument with the second argument
fruit = "kiwi"
fruit.replace("w","W")
    # kiWi

# .upper() method 
# returns string with all uppercase characters 
bird = "cockatiel"
bird.upper()
    # COCKATIEL

# .join method 
# concatenates a list of strings together to create a new string joined with the desired delimiter 
x = "+".join(["I","am","tired"])
    # I+am+tired