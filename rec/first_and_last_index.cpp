#include<bits/stdc++.h>
using namespace std;

//  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

int firstocc(int arr[], int target, int size){
    int first = 0;
    int temp = -1;
    int last = size - 1;
    while(first <= last){

        int mid = first + (last - first)/2;

        if (arr[mid] == target)
        {
            temp = mid;
            last = mid - 1;
        }
        else if (arr[mid] < target)
        {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }
    if (temp != -1)
    {
        return temp;
    }
    else{
        return -1;
    }
    
}

int lastocc(int arr[], int target, int size){
    int first = 0;
    int temp = -1;
    int last = size - 1;
    while(first <= last){

        int mid = first + (last - first)/2;

        if (arr[mid] == target)
        {
            temp = mid;
            first = mid + 1;
        }
        else if (arr[mid] < target)
        {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }
    if (temp != -1)
    {
        return temp;
    }
    else{
        return -1;
    }
    
}


int main(){

    int arr[16] = {1,2,2,8,8,9,9,9,9,9,9,9,9,9,9,9};
    int target = 9;
    int size = 16;

    cout<<"the first position of 9 is : "<<firstocc(arr,target,size)<<endl;
    cout<<"the last position of 9 is : "<<lastocc(arr,target,size)<<endl;
	
	return 0;
}