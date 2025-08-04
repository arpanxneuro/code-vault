class Solution:
    def getSecondLargest(self, arr):
        if len(arr) < 2:
            return -1
        maxn = arr[0]
        sec_max = -1
        found = False
        for i in range(1, len(arr)):
            if arr[i] > maxn:
                maxn = arr[i]
        for i in range(len(arr)):
            if arr[i] < maxn:
                if not found or arr[i] > sec_max:
                    sec_max = arr[i]
                    found = True

        return sec_max if found else -1
