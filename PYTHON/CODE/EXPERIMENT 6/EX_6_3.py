import pickle
class Customer:
    def __init__(self, id, name, mob):
        self.id = id
        self.name = name
        self.mob = mob
customer_list = []
def storeData(customer_list):
    customer_file = open('Customer_Details' , 'ab')
    pickle.dump(customer_list , customer_file)
    customer_file.close()

n = int(input("Enter the number of customers: "))

for i in range(n):
    id = int(input("\nEnter customer id: "))
    n = input("Enter customer name: ")
    m  = int(input("Enter mobile number: "))
    c = Customer(id , n , m)
    customer_list.append(c)

storeData(customer_list)

def loadData():
    customer_file = open('Customer_Details' , 'rb')
    details = pickle.load(customer_file)
    customer_file.close()
    return details

details = loadData()
print("****CUSTOMER DETAILS****")
print("\nName\tID\tMobile Number\n")
for d in details:
    print(d.name, "\t" , d.id , "\t" , d.mob)
