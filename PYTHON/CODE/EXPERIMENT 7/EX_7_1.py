from PyPackages.Employee import profile, qualification
from PyPackages.Account import salary

profile.ask()
qualification.ask()

salary.ask()	

def ask():
    basic = int(input("\nEnter basic salary:\n"))
    hra = int(input("\nEnter HRA:\n"))
    pf = int(input("\nEnter pf:\n"))
    print("\nYour net salary is: ", basic + hra - pf)

def ask():
    name = input("Enter name:\n")
    age = int(input("\nEnter age:\n"))
    dob = input("\nEnter date of birth:\n")

def ask():
    degree = input("\nEnter your degree:\n")
    xp = int(input("\nEnter experience in years:\n"))
