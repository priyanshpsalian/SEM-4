year=input("Enter the year your want to check if its leap year or not ")
year =int(year)
if(year%4==0):
    if(year%400==0  and year%100==0):
        print("yes it is a leap year")
    else:
        print("not a leap year")    
else:
    print("not a leap year")        
