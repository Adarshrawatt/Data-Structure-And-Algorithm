#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int size){
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
    
    
}

int main(){

	int arr[4] = {1,2,3,1};
    int size = 4;

    cout<<peak(arr,size)<<endl;
	
	return 0;
}