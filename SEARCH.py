id = []
name = []


n = int(input("Enter Total No Of Books : "));
for i in range (n):
    i = int(input("Enter Book ID : "))
    n = input("Enter Book Name : ")
    id.append(i)
    name.append(n)


def linearSearch():
    key = int(input("Enter Number To Be Searched : "))
    for i in range (len(id)) :
        if(id[i] == key ):
            print("Book Found At Location : " + str(i+1))
            return
        else:
            print("Book Not Available...\n") 


def binSearch():
    key = int(input("Enter Number To Be Searched : "))
    n = len(id)
    min , max = 0, n-1 
    id.sort()
    while min <= max :
        mid = (min+max)//2
        val = id[mid]
        if(val == key):
            f = 1
            print("Book Found At Location " + str(mid+1))
            return
        elif(val <  key ):
            min = mid+1
        else:
            max = mid-1
    if ( f == 0):
        print("Book Not Available...\n")


while True:
    print("1. Linear Search...\n")
    print("2. Binary Search...\n")
    ch = int(input("Enter Your Choice  : "))

    if (ch == 1):
        linearSearch()
    elif(ch == 2):
        binSearch()
    else:
        print("Invalid Choice BYEEEE...")
        break

     




