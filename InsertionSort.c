#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //Insertion sort implementation.
    int arr[] = {5,2,1,3,4,7};
    int toCheck = 0;
    int length = sizeof(arr)/sizeof(int);   //To get length of array.
    int i,j;
    for(i = 1; i< length; i++){
        toCheck = arr[i];  //Initialise the value to which we need to find a place.
        int j = i-1;  // Initialise j to 1 less than the value for which we find a place in subarray.
        //While loop to iterate through subarray.
        //if the value of j is greater than 0 and value of arr in the subarray is greater than we need to sort.
        while(j>= 0 && arr[j] > toCheck){
            arr[j+1] = arr[j]; // It will move the element to one place ahead in array.
            
            j--; // so that we move backward in subarray.
        }
        arr[j+1] = toCheck; // It will Initialise the value at the right place.
        
    }
    // This for is going to print the sorted array.
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
