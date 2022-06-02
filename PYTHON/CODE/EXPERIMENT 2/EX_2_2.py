from array import *
arr=array("i",[])
elements=int(input("Enter the no of elements you want to insert: "))
for j in range(0,elements):
    element=int(input("Enter the element you want to insert "))
    arr.append(element)
out=array("i",[])
flag=False
# arr = array('i',[2,13,56,34,90])
for i in arr:
    for j in range(2,i-1):
        if(i%j==0):
            flag=True
    
    if(flag==True):
        out.append(i)

print("Array after removing all the prime numbers are as follows:")
a=len(out)
for j in range(0,a):
    print(out[j])

