#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int target){
for(int a=0; a<5; a++){ 
    if(target==arr[a]){
        return a;
    } else {
        continue;
    }
}
return -1;
}
int main(){
 int arr[5] = {1,2,3,4,5};
 int target = 5;
 cout<<linearSearch(arr,target)<<endl;
 return 0;
}
