#include <stdio.h>
#include <string.h>

int binarysearch(int arr[], int target, int lenth){

    int left = 0;
    int right = lenth - 1;
    
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