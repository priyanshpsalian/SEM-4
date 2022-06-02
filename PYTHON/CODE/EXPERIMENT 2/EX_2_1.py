from array import *
arr=array("i",[])
arr2=array("i",[])
# Driver program
if __name__ == "__main__":
    
    
    while True:
        print("1:To insert elements into the array")
        print("2:To print elements in the array")
        print("3:To reverse the order of elements in the array")
        print("4:To get in length in bytes of one array item")
        print("5:To get in length in bytes of array")
        print("6:To append items form another array")
        print("7:To remove a specific item from the array")
        print("8:To insert a specific item at a specific position in the array")
        print("9:To delete the array")
        print("10:To exit")
        n=int(input("Enter your choice: "))
        if n==1:
            elements=int(input("Enter the no of elements you want to insert: "))
            for j in range(0,elements):
                element=int(input("Enter the element you want to insert "))
                arr.append(element)
        if n==2:
            if len(arr)==0:
                print("First insert elements to the array")
            else:
                a=len(arr)
                for j in range(0,a):
                    print(arr[j])
        if n==3:
            if len(arr)==0:
                print("First insert elements to the array")
            else:
                a=len(arr)
                arr=arr[::-1]
                print("After reversing the elements of array:")
                for j in range(0,a):
                    print(arr[j])

        if n==4:
            if len(arr)==0:
                print("First insert elements to the array")
            else:
                print(arr.itemsize)

        if n==5:
            if len(arr)==0:
                print("First insert elements to the array")
            else:
                u=arr.itemsize
                l=len(arr)

                print(u*l)
        if n==6:
            elements=int(input("Enter the no of elements you want to insert: "))
            for j in range(0,elements):
                element=int(input("Enter the element you want to insert "))
                arr2.append(element)
            for j in range(0,elements):
                arr.append(arr2[j])
            a=len(arr)    
            for j in range(0,a):
                print(arr[j])
        if n==7:
            if len(arr)==0:
                print("First insert elements to the array! ")
            else:
                pos=int(input("Enter the position from which you want to remove the element: "))
                arr.pop(pos)
                print("After removing the element from position",pos,":")
                a=len(arr)
                for j in range(0,a):
                        print(arr[j])
        
        if n==8:
            if len(arr)==0:
                print("First insert elements to the array! ")
            else:
                pos=int(input("Enter the position at which you want to insert the element: "))
                element=int(input("Enter the element which you want to insert "))
                arr.insert(pos,element)
                print("After inserting the element in position",pos,":")
                a=len(arr)
                for j in range(0,a):
                        print(arr[j])
        
        if n==9:
            arr=array("i",[])
            print("Your array has been deleted!")

        
     



        if n ==10:
            break











        

    
    