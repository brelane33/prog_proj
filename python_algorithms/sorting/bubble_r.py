nums = [25, 15, 19, 48, 27, 42, 40, 13, 4, 30, 39, 33, 44, 16, 49, 14, 28, 17, 47, 31]

s1 = len(nums)
print("Number of elements in the array: %d" % s1)
print("Original Array: %a" % nums)

needed = True
passes = 0


while(needed):
    needed = False
    for i in range(0, s1-1):
        if nums[i] > nums[i+1]:
            needed = True
            tmp = nums[i]
            nums[i] = nums[i+1]
            nums[i+1] = tmp
    passes = passes + 1

print("Sorted Array: %a" % nums)
print("Number of passes: %d" % passes)
