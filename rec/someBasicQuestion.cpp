#include<iostream>
using namespace std;
int main()
{

    // question--> primeOrnot
    int number = 15;
    int a=2;
    for(; a<number; a++){
        if(number%a==0){
            cout<<"non-prime number"<<endl;
            break;
        } else {
            continue;
        }
    }
     if(a==number){
        cout<<"prime number"<<endl;
        }


    // question--> reverse a number 
    int n;
    cin>>n;
    int reverse = 0;
    while(n>0){
        int remainder = n%10;
        reverse = reverse*10+remainder;
        n = n/10;
    }
    cout<<reverse<<endl;




    //Armgstrong number 
    int numb;
    cin>>numb;
    int num = numb;
    int sum = 0;
    while(numb>0){
        int remainder = numb % 10;
        sum = (remainder*remainder*remainder) + sum;
        numb = numb / 10;
    }
    if(num==sum){
        cout<<"this is armgstrong number"<<endl;
    } else {
        cout<<"not a armgstrong number"<<endl;
    }
    return 0;
}