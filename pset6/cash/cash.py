import cs50

def main():
    while True:
        #get the amount of change due from the user
        print("Change owed: ", end = "")
        money = cs50.get_float()
        if money>=0:
            break

    #covert the money (in decimal) to cents (an integer)
    cents = int(money*100)

    #find the number of quarters
    quarters = cents // 25
    #subtract the value of the quarters and find the number of dimes
    dimes = (cents - 25*quarters) // 10
    #do it again for nickels
    nickels = (cents - 25*quarters - 10*dimes) // 5
    #the rest are pennies
    pennies = cents - 25*quarters - 10*dimes - 5*nickels

    #print the result :-)
    print("{}".format(quarters+dimes+nickels+pennies))

if __name__ == "__main__":
    main()
