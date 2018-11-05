
#include<stdlib.h> 
#include<stdio.h> 

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, first_subarray, second_subarray, merged_subarray; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    first_subarray = 0;
    second_subarray = 0;
    merged_subarray = l; 
    while (first_subarray < n1 && second_subarray < n2) 
    { 
        if (L[first_subarray] <= R[second_subarray]) 
        { 
            arr[merged_subarray] = L[first_subarray]; 
            first_subarray++; 
        } 
        else
        { 
            arr[merged_subarray] = R[second_subarray]; 
            second_subarray++; 
        } 
        merged_subarray++; 
    } 
  
    while (first_subarray < n1) 
    { 
        arr[merged_subarray] = L[first_subarray]; 
        first_subarray++; 
        merged_subarray++; 
    } 
  
    while (second_subarray < n2) 
    { 
        arr[merged_subarray] = R[second_subarray]; 
        second_subarray++; 
        merged_subarray++; 
    } 
} 

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 

        int m = (l+r)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Input array is: \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\nSorted array is: \n"); 
    printArray(arr, arr_size); 
    return 0; 
} 
