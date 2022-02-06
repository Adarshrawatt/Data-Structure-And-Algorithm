#include<bits/stdc++.h>
using namespace std;

// here we can use boolean expresion for enhance our code 
// as if our array is already sorted than we not have to check other loops

void bubbleSort(int arr[], int size){

    for (int  i = 1; i < size; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSorted = false;
            }
        }
        if(isSorted){
            break;
        }
    }
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}