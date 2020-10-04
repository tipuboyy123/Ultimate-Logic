
#include <stdio.h> 

int linear_search(int arr[], int n, int x) 
{ 
	for (int i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 1, 2, 3, 4, 5 }; 
	int x = 5; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int index = linear_search(arr, n, x); 
	(index == -1) ? printf("Element is not present in array") 
				: printf("Element is present at index %d", 
							index); 
	return 0; 
} 
