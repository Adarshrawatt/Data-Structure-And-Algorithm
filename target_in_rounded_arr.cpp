//        https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int size){

    int start = 0;
    int end = size - 1;

    while (start < end){
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return start;

}


    int binarySearch(int arr[], int target, int size, int start, int end){
        
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            
            if (arr[mid] < target)
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
        }

        return -1;
        
    }

int main(){

	int arr[2] = {3,1};
    int size = 2;
    int target = 1;
    cout<<binarySearch(arr,target,7,0,getPivot(arr,size)-1);
    cout<<binarySearch(arr,target,size,getPivot(arr,size),size-1);


	return 0;
}