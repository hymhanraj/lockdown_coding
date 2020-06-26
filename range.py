''' Given start and end of a range, write a Python program to print all negative numbers in given range.
	Example: Input: start = -4, end = 5 Output: -4, -3, -2, -1 Input: start = -3, end = 4 Output: -3, -2, -1
'''
for num in range(-3,4):
  if num<0:
    print(num)
