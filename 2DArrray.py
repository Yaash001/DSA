stud_Data = []
n = int (input("Enter Number Of Students: "))

for i in range (n):
    id = int(input("Enter id  :"))
    name = input("Enter Name  : ")
    marks = float(input("Enter Marks : "))

    stud_Data.append([id,name,marks])

for i in range (n):

    print("\n",stud_Data[i])
