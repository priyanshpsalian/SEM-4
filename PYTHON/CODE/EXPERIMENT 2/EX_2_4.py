if __name__ == "__main__":
    arr=[]
    
    
    while True:
        print("1:To insert elements into the list")
        print("2:To print strings in the list")
        print("3:To sort the string in the list")
        print("4:To check if the string is palindrome or not")
        
        print("5:To exit")
        n=int(input("Enter your choice: "))
        if n==1:
            a=int(input("Enter the no of string you want to add: "))
            for i in range(0,a):
                n=input("Enter the string: ")
                arr.append(n)
            print("Entered strings are as follows: ")    
            for i in range(0,a):
                print(arr[i])    
        if n==2:
            print("Entered strings are as follows: ")
            a=len(arr)
            for i in range(0,a):
                print(arr[i])

        if n==3:
            print("After sorting the strings in alphabatical are listed below: ")
            a=len(arr)
            arr.sort()
            for i in range(0,a):
                print(arr[i])

        if n==4:
            tt=input("Enter the string: ")
            txt=tt
            flag=True
            a=len(tt)
            for i in range(0,a):
                
                if(tt[i]!=txt[a-i-1]):
                    flag=False
            
            if(flag==True):
                print("The entered string is a palindrome!")     
            if(flag==False):
                print("The entered string is not a palindrome!")

        if n ==5:
            break