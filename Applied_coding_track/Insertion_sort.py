def Insertion_Sort(arr):

    ''' Writing code for Insertion sort...............'''
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while( j>0 and key < arr[j]):
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = key




array = [1,15,7,8,9,13,31,43,78]
Insertion_Sort(array)

for element in array:
    print(element, end = " ")
