#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int main(){

    int arr[4] = {11,13,15,17};
    int size = 4;

    int pivotElement = getPivot(arr,size);
    cout<<pivotElement;
	
	return 0;
}