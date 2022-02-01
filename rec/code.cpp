#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size , int target){
    int first = 0;
    int last = size - 1;

    while (first <= last)
    {
        int mid = first + (last - first)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }
    return -1;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 3;

    cout<<"the index of 3 in the arr is : "<<binarySearch(arr,size,target)<<endl;
	
	return 0;
}