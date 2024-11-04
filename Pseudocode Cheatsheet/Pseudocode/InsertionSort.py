# Used for: Sorting small or partially sorted datasets.
# Big O:  O(n^2) worst case; 
#         O(n) best case for nearly sorted data.
# Alternative DSA: Use merge sort or quicksort for larger datasets.

def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
