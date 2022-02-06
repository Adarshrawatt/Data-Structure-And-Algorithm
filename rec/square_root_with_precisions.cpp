#include<bits/stdc++.h>
using namespace std;

int square(int x){
int temp = 0;
for (int i = 0; i < x; i++)
{
    if ((i*i)>x)
    {
        break;
    }
    else {
        temp = i;
    }
    
}

return temp;

}

int main(){

    cout<<square(8);

    return 0;
}