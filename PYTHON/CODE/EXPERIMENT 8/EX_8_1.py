import re
n= int(input("Enter Total Number of People in PhoneBook: "))
f = open('PhoneBook.txt','w')
f.write("Surname \tFirstName \tPhone no\n")

for i in range(n):
    print('\nPerson '+str(i+1)+": ")
    name = input('Enter First Name: ')
    surname = input('Enter surname: ')
    phone = input('Enter Phone no.: ')
    f.write(surname+"\t\t" +name+"\t\t"+phone+"\n")
f.close()

f = open('PhoneBook.txt','r')
print('\n---Contents of PhoneBook.txt---\n')
phonelist = f.readlines()
for line in phonelist:
    print(line, end="")
pattern_RaoJK= r'(Rao[\s]J[\w]+[\s][\d]{10})|(Rao[\s]K[\w]+[\s][\d]{10})'
print("\nEntries with surname as 'Rao' and First Name Starting with 'J' or 'K':\n")
for line in phonelist:
    result = re.search(pattern_RaoJK, line)
    print(result)
f.close()
