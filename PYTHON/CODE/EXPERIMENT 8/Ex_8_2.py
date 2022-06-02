import re

nameofCities = input("Enter the names of cities separated with space: \n")
pattern1 = r'[\w]+ai'
result = re.findall(pattern1, nameofCities)
print("\nName of cities ending with 'ai': ")

for match in result:
    print(match, end=" ")

pattern2 = r'Mu[\w]+|Ma[\w]+'
result = re.findall(pattern2, nameofCities)
print("\n\nName of cities starting with 'Mu' or 'Ma' : ")

for match in result: 
    print(match, end=' ')
 
pattern3 = r'\b[\w]u[\w]*a[\w]\b'
result = re.findall(pattern3, nameofCities)
print("\n\nName of cities with 'u' as second letter and 'a' as second last letter: ")

for match in result : 
    print(match, end=" ")
