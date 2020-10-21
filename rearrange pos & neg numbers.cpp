#include<iostream>
using namespace std;

void rearrange(int arr[], int n){
    int temp, j; 
    for (int i = 1; i < n; i++) { 
        temp = arr[i]; 
  
        // if current element is positive, do nothing 
        if (temp > 0) 
            continue; 
            
        j = i - 1; 
        while (j >= 0 && arr[j] > 0) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
  
        // Put negative element at its right position 
        arr[j + 1] = temp; 
    } 
}

int main()
{
    int arr[] = {5,-4,-3,2,7,-5};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
