no = []
s = int(input("Enter Size : "))

for i in range(s):
    num = (int(input("Enter Number : ")))
    no.append(num)

#SELECTIO SORT

for i in range (0 , s-1):
    min = i;
    for j in range (i+1 , s):
        if(no[min] > no[j]):
            min = j
    no[i],no[min] = no[min],no[i]

print("Sorted Array  : ");
print(no)



