design = [5,4,3,2,1]
str=""
for i in design:
    for j in range(i):
       
        str = str +"*"
    
   
    print(str)    
    str=""



design=[1,2,3,4,5]
str=""
for i in design:
    
    for k in range(5-i):
        str=str+" "

    
    for j in range(i):
        str=str+"* "
    print(str)
    str=""    


design=[1,2,3,4,5]
for i in design:
    for j in range(i):
        let=chr(96+i).upper()
        str=str+" "+let
    print(str)
    str=""



design=[1,2,3,4,5]
strw=""
for i in design:
    for k in range(5-i):
        strw=strw+" "
    for j in range(i):
        
       
        
        strw=strw+f'{j+1}'
    l=i
    while(l>1):
        
        strw=strw+f'{l-1}'
        l=l-1

    
    print(strw)
    strw=""