
temp = 0
passes = 0

unsorted = [5, 1, 2, 4, 3, 7, 8, 9, 6]

print("unsorted list: ", unsorted)

for i in range(0, 9):
    for j in range(0, 8 - i):
        if unsorted[j] > unsorted[j + 1]:
            passes += 1
            print("i", i, "j", j)
            temp = unsorted[j]
            unsorted[j] = unsorted[j+1]
            unsorted[j+1] = temp

print("sorted list: ", unsorted, "passes:", passes)
