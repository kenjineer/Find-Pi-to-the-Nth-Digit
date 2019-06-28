from math import pi
limit = True

def Precision(num, place):
    result = round(float(num), place)
    if place == 0:
        return int(result)
    else:
        return result

while limit:
    place = int(input("Enter how many decimal places of Pi to be displayed [LIMIT 15]: "))

    if place < 16 and place >= 0:
        limit = False
        result = Precision(pi, place)
    else:
        print("Decimal place out of bounds! Please enter a valid value.")

print("Pi in ", place, " decimal places is: ", result) 