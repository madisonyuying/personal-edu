# Errors 


# python interpreter will report errors present within code. carat character (^) typically below error message with the the type of error detected


# ZeroDivisionError
# reported when a division operator is performed and the denominator = zero
numerator = 5
denominator = 0 
ickyResult = numerator / denominator

# SyntaxError 
 # can include: misspelled keywords, missing or too many brackets or parenthesis, incorrecy operator, missing or too many quotation marks, or other unmet/ unideal condtions.
syntaxError = 10 + 13 = 23

# NameError 
# reported when an unknown variable is detected
numberDogs = 5
numberDgs = numberDogs + 1 
# would yield a name error


# try and except blocks can be used to handle error within a code block
    # code that may raise and error will be written in a try block 
    # if an error arrises the try block will cease execution and the except block will execute
def ageDogYears(myAge):
    olderYears = ( myAge - 2 ) * 7
    youngerYears = 2
    dogYears = olderYears + youngerYears
    print(dogYears)

try ageDogYears(19):
    print("Your age in dog years")

except: 
    print(error)