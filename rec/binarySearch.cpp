#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int target){
    int s = 0;
    int e = sizeof(arr);
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(target==arr[mid]){
            return mid;
        } else if(target<arr[mid]){
            e = mid-1;
        } else if(target>arr[mid]){
            s = mid+1;;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int target = 3;
    cout<<binarySearch(arr,target)<<endl;
    return 0;
}