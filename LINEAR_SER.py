arr = [10,20,30,40,50]
key = int(input("Enter Your Search Element :"))
i = 0
flag = -1

for i in range(len(arr)):
    if arr[i] == key:
        flag = 1
        break

if(flag == 1):
    print()    
