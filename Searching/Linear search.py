

def linear_search(arr, n, x): 

	for i in range (0, n): 
		if (arr[i] == x): 
			return i; 
	return -1; 


arr = [1, 2, 3, 4, 5]; 
x = 5; 
n = len(arr); 
index = linear_search(arr, n, x) 
if(index == -1): 
	print("Element is not present in array") 
else: 
	print("Element is present at index", index); 
