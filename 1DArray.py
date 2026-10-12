id = []
name = []
marks = []
n = int(input("Enter No Of Students : "))

for i in range(n):
    id.append(int(input("Enter ID  : ")))
    name.append(input("Enter Name  : "))
    marks.append(float(input("Enter Marks :")))

for i in range(n):
    print("Id=" + str(id[i]))
    print("Name =" + name[i])
    print("Marks =" + str(marks[i]))
        