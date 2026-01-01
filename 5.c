#include <stdio.h>
void selectionSort(int *arr , int n){
    for (int i=0 ; i < n-1 ; i++){ // last element will be in correct position automatically

        int min_idx = i;

        for(int j = i+1 ; j< n ; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }

        if (min_idx != i){ //changing the elements.
            int x = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx]= x ;
        }
    }
}