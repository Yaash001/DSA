n = int(input("Enter Array Size : "))
key = int(input("Enter Key Element : "))
a = []
for i in range(n):
    a.append(int(input("Enter Number : ")))
#a.sort()

temp = a[n-1]
a[n-1] = key
i = 0

while a[i] != key:
    i += 1

a[n-1] =  temp

if (i < n-1 or key == temp):
    print("Element Found at ", str(i))
else:
    print("Element Not Found ")

