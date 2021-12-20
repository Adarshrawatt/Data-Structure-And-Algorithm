#include<bits/stdc++.h>
using namespace std;

int main(){
   int inpt;    // we can take input with any method 
                // in char as well as in int 
   cout<<"enter the input"<<endl;
   cin>>inpt;
    switch (inpt)
    {
    case 1:
        cout<<"hello world with input 1"<<endl;
       break;
    case 2:
        cout<<"hello world with input 2"<<endl;
        break;
    case 3:
        cout<<"hello world with input 3"<<endl;
        break;
    default:
        cout<<"not mentioned"<<endl;
       break;
   } 



    int input;
    cout<<"enter the input again"<<endl;
    cin>>input;
    // RUN LOOP WHILE WE CANNOT PUT 0 IN THE INPUT
    while (input != 0)  
    {
        cin>>input;
        if(input==0){
            break;
        } else {
            switch (inpt)
    {
    case 1:
        cout<<"hello world with input 1"<<endl;
       break;
    case 2:
        cout<<"hello world with input 2"<<endl;
        break;
    case 3:
        cout<<"hello world with input 3"<<endl;
        break;
    default:
        cout<<"not mentioned"<<endl;
       break;
   } 
        }
    }
    
    
}