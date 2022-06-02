class Student:
    def __init__(self, rollno, name, marks):
        self.rollno= rollno
        self.name = name
        self.marks = marks

class Fail(Exception):
    def __init__(self):
        print("FAIL") 

n = int(input("Enter number of Students:"))

students = []

for i in range(0,n):
    rno = int(input("Enter roll no.: "))
    name = input("Enter name: ")
    marks = int(input("Enter marks: "))
    student = Student(rno,name,marks)
    students.append(student)
    
print("")
print("Roll No.\t Name\tResult")
for student in students:
    try:
        if (student.marks<40):
            print(student.rollno,"\t""\t",student.name,end="\t")
            raise Fail
        else:
            print(student.rollno,"\t""\t",student.name,"\t",student.marks)
    except:
        continue
