#include<iostream>
using namespace std;
int main(){
// print the number which are not divisible by 3 
    int number = 100;
    for(int a=1; a<=100; a++){
        if(a%3==0){
            continue;
        } else {
            cout<<a<<endl;
        }
    }



    // find the number is prime or not
    int primeornot = 7;
    int a;
    for(a=1; a<primeornot; a++){
        if(a==1){
            continue;
        }
        if(primeornot%a==0){
            cout<<"the numeber is not prime here "<<endl;
            break;
        } 
    }
    if(a==primeornot){
        cout<<"this is a prime number "<<endl;
    }




    // how many numbers is prime in a given reach
    int start,end;
    start = 1;
    end = 10;
    for(start=1; start<end; start++){
        int b;
        for(b=2; b<start; b++){
           if(start%b==0){
                break;
            } 
        }
        if (b==start){
                cout<<start<<endl;
            }
    }
    


    return 0;
}