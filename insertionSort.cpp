#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0)
        {
            if(temp < arr[j]){
                // shift the element
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}


int main(){
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    insertionSort(arr,size);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}