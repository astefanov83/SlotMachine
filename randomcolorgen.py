import random

def randcolorgen():

    new_row = []

    for elem in range(3):

        color = random.randint(0,5)

        new_row = new_row + [int(color)]

    return new_row

