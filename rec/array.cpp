#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int a=0; a<n; a++){
        cin>>array[a];
    }
    // find maximum
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int a=0; a<n; a++){
        minNo = min(minNo,array[a]);
        maxNo = max(maxNo,array[a]);
    }
    cout<<minNo<<endl;
    cout<<maxNo<<endl;
    


    return 0;
}
