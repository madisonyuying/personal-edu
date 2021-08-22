# If statements 
average = 57

if average > 50 : # an if statement is followed by a colon
    # if the if statement is evaluated to true then the code block following it is executed. if the if statement evaluates to false then the code block is skipped and the next line of code with the same level of indention is executed 
    print("The average is greater than fifty")
elif average < 50 : # an elif statement continues the check and is performed after the initial if statement 
    print("The average is less than fifty")
else : 
    print("The average is fifty")
