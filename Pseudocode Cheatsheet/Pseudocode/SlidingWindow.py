# Used for: Problems involving contiguous subarrays (e.g., max sum, subarray count).
# Big O:  O(n)
# Alternative DSA: Use prefix sums or two-pointer techniques for specific problems.

def slidingWindowSum(arr, k):
    window_sum = sum(arr[:k])
    max_sum = window_sum

    for i in range(len(arr) - k):
        window_sum = window_sum - arr[i] + arr[i + k]
        max_sum = max(max_sum, window_sum)

    return max_sum
