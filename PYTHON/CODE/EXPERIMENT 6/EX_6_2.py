name = input("Enter the name of text file to be created : ")
file = open(f"{name}.txt", "x")
print(f"{name}.txt is created")
file = open("test.txt", "r")
noOfLines = 0
noOfWords = 0
noOfCharacters = 0
sentences = []
for line in file:
    sentences.append(line)
    line = line.strip("\n")
    words = line.split()
    noOfLines += 1
    noOfWords += len(words)
    noOfCharacters += len(line)
file.close()
print("Lines:", noOfLines, "\nWords:", noOfWords, "\nCharacters:", noOfCharacters, "\n")
new = open('new.txt', 'w')
new.writelines(sentences)
new.close()
new = open('new.txt', 'r')
print(new.read())
