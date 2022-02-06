#include<bits/stdc++.h>
using namespace std;

int getRoot(int arr[], int size, int target){

    int start = 0;
    int end = size - 1;
    int temp = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target >= (arr[mid]*arr[mid]))
        {
            temp = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        
    }

    return temp;
    

}


int main(){

    int arr[5] = {2,3,4,5,6};
    int target = 10;

    int ans = getRoot(arr,5,target);
    cout<<ans<<endl;


	return 0;
}