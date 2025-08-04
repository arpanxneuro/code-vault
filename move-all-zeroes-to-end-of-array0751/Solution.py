#User function Template for python3

class Solution:
	def pushZerosToEnd(self,arr):
    	# code here
    	pos = 0
    	for i in range(len(arr)):
    	    if arr[i] != 0:
    	        arr[pos], arr[i] = arr[i], arr[pos]
    	        pos += 1
    	return arr