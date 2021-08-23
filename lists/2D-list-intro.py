# modifying 2D lists
    # [elemenInSublist] = newValue
nameAnimals = [["Amanda", "Dog"], ["Bianca", "Cat"], ["Cat", "Lizard"]]
nameAnimals[0][1] = "Horses"
print(nameAnimals)
    # [["Amanda", "Horses"], ["Bianca", "Cat"],["Cat", "Lizard"]]

# accessing 2D lists
    # list[sublist_index][element_in_sublist_index]
age = [["Jake", 45], ["Aiden", 25], ["Parker", 32]]
jakeAge = age[0][1]
