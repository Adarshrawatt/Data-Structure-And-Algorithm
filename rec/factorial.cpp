#include<bits/stdc++.h>
using namespace std;
 int fac(int num){
        if(num == 1){
            return 1;
        }
        return num * fac(num-1);
    }

int main(){

    int num;
    cout<<"please enter the number :"<<endl;
    cin>>num;
    int ans = fac(num);
    cout<<ans<<endl;

    return 0;
}