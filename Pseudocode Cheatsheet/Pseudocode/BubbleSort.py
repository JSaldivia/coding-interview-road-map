# Used for: Simple sorting for small datasets.
# Big O:  O(n^2) for worst and average cases;
#         O(n) for best case (already sorted).
# Alternative DSA: Use merge sort or quicksort for better performance.
    
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
