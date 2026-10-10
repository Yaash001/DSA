
no = []
s = int(input("Enter Size : "))

for i in range(s):
    num = int(input("Enter Number : "))
    no.append(num)

def quickSort(no):
    if len(no) <= 1:
        return no

    pivot = no[0]
    left = [x for x in no[1:] if x <= pivot]
    right = [x for x in no[1:] if x > pivot]

    return quickSort(left) + [pivot] + quickSort(right)

no = quickSort(no)

print("Sorted Array :")
print(no)
