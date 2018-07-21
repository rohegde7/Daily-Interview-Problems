'''
# Author: https://www.github.com/rohegde7 (Rohit Hegde - hegde.rohit7@gmail.com)

# Status: Success

*************Day 8 Question*****************

Given an unsorted array, and a key.
Find 2 elements such that the difference between the elementsis equal to the key.

Example:
{4, 2, 5, 8, 21, 34, 10} key = 24
Output:
Pair found (34, 10)

Difficulty: Easy
'''

list_numbers = list(map(int, input().split()))
#print(list_numbers)
key = int(input())
#print(isinstance(key, int))
flag = False

#sorting the given list
list_numbers.sort()
print(list_numbers)

for i in range(len(list_numbers)-1):
    for j in range(i+1, len(list_numbers)):
        x = list_numbers[i]
        y = list_numbers[j]
        diff = y-x

        if diff == key:
            print("Pair found: ", x, "and", y)
            flag = True
            break

        '''as our list is sorted if the diff between x and y is > than key then
            obvio the diff between x and the num after y will also be greater than key'''
        if diff > key:  
            break

if flag == False:
    print("Not found")
        
        
    

    