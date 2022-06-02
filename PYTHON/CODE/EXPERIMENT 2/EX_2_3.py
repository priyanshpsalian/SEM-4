inn=input("Enter the string:")
done=[]
str=""

for i in inn:
    if i==" ":
        str=str+i
    elif i not in done:
        str=str+i
        done.append(i)
    else:
        str=str+"@"
print("The customized string is as follows: ")
print(str)