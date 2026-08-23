arr = [10,20,30,40,50]
key = int(input("Enter Your Search Element :"))
i = 0

for i in range(len(arr)):
    if arr[i] == key:
        print("Element Found at " + str(i+1) )
        break
else:
    print("No Element Found")
    
