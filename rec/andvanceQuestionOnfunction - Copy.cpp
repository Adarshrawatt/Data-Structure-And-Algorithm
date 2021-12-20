#include <iostream>
using namespace std;

// question number 1
int sumadd(int n){
    int sum = 0;
    for(int a=0; a<=n; a++){
        sum += a;
    }
    return sum;
}

// question number 2
bool triplet(int a,int b, int c){
    int max = a;
    if(b>max){
        max = b;
    } else if(c>max){
        max = c;
    }
    if(max==a){
        if(a*a==b*b+c*c){
            return true;
        } else{
            return false;
        }
    } else if (max==b){
        if(b*b==a*a+c*c){
            return true;
        } else{
            return false;
        }
    } else{
         if(c*c==b*b+a*a){
            return true;
        } else{
            return false;
        }
    }
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<sumadd(n)<<endl;

    int a,b,c;
    cin>>a>>b>>c;
    bool ans = triplet(a,b,c);
    cout<<ans<<endl;
    return 0;
} 