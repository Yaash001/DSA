n = int(input("Enter The Size Of Array: "))
a = []
key = int(input("Enter The Key Element : "))

for i in range(n):
    a.append(int(input("Enter Number  : ")))

a.sort();
x = 0;
y = n-1
f = 0;

while x <= y:
    mid = (x+y)//2
    if (a[mid] == key):
        f =1 ;
        break;
    elif(a[mid] < key ):
        x = mid +1 
    else:
        y = mid - 1 

print(a)

if(f == 1):
    print("Element Found At : ",str(mid + 1))
else:
    print("No Element")