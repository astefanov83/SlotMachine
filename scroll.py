import randomcolorgen
import time
import keyboard


#action that lever is pulled
lever = False

def scroll():


    #iterate through list of rows to retain previous row

    lst = []

    for i in range(30):
        lst = lst + [randomcolorgen.randcolorgen()]

    i = 0


    while keyboard.is_pressed("space") == False: 
 
        for row in range(3):
            print(lst[row + i])    
        
        print(" ")
        i = i + 1
        time.sleep(0.1)

    print("FINAL: ", lst[i])

    


scroll()


    

