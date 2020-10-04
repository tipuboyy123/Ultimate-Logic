public class LinearSearch{    
public static int linear_search(int[] arr, int key){    
        for(int i=0;i<arr.length;i++){    
            if(arr[i] == key){    
                return i;    
            }    
        }    
        return -1;    
    }    
    public static void main(String a[]){    
        int[] a1= {1,2,3,4,5};    
        int key = 1;    
        System.out.println(key+" is found at index: "+linear_search(a1, key));    
    }    
} 