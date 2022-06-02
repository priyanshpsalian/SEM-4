
i=1  
num=1
# for num in range(1,1000):
while i<1000:
  temp=num
  sum=0
  while temp>0:
    digit=temp%10
    sum=sum+digit*digit*digit
    temp=temp//10

  if sum==num:
    print (num)
  i=i+1
  num=num+1  