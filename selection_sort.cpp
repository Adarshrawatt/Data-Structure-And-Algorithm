#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
	for (int  i = 0; i < size-1; i++)
	{
		int min_index = i;
		for (int j = i+1; j < size; j++)
		{
			if(arr[min_index]>arr[j]){
				min_index = j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
	
}

int main(){
	int arr[5] = {5,4,3,2,1};
	int size = 5;
	selectionSort(arr,size);
	for (int  i = 0; i < size; i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}