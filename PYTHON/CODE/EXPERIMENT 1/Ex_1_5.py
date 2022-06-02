no = int(input("Till what no do you want to print fibonacci series? "))

n1, n2 = 0, 1
count = 0


if no <= 0:
   print("Please enter a positive integer")

elif no == 1:
   print("Fibonacci sequence upto",no,":")
   print(n1)

else:
   print("Fibonacci sequence:")
   while count < no:
       print(n1)
       nth = n1 + n2
     
       n1 = n2
       n2 = nth
       count += 1