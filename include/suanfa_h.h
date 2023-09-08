#include <stdio.h>
#include <string.h>

int binarysearch(int arr[], int target){

    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]) - 1;
    printf("left: %d, right: %d, sizeof(arr): %d\n", left, right, sizeof(arr)/sizeof(arr[0]));
    
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == target){ 
            return mid;
        } 
        else if(arr[mid] < target){ 
            left = mid + 1;
        }  
        else  {
            right = mid - 1;  
        }  
    } 
    return -1; 
}