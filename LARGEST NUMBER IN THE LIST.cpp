#include <stdio.h> 
int main()    
{    
int i;
    //Initialize array     
    int arr[] = {91, 67,56, 75, 85};      
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for (i = 0; i < length; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}
