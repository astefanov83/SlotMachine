import time
import keyboard
import random


#action that lever is pulled
lever = False

def isUnique(arr):
    test = arr[0]
    for elem in range(1, len(arr)): 
        if arr[elem] != test:
            return False
    return True

def randcolorgen():

    new_row = []

    for elem in range(3):

        color = random.randint(0,5)

        new_row = new_row + [int(color)]

    return new_row


def scroll():


    #iterate through list of rows to retain previous row

    lst = []

    for i in range(1000):        
        lst = lst + [randcolorgen()]

    i = 0

    while keyboard.is_pressed("space") == False: 
 
        for row in range(3):
            print(lst[row + i])    
        
        print(" ")
        i = i + 1
        time.sleep(0.1)

    print("FINAL: ", lst[i])
    
    if isUnique(lst[i]) == True:
        print("Game Won!")
    if isUnique(lst[i]) == False:
        print("Loser!")




scroll()

    

