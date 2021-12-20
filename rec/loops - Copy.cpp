#include<iostream>
using namespace std;
int main()
{

    // basic of "for loop"
    int number = 100;
    int sum = 0;
        for(int a=1; a<=number; a++){
        sum += a;
    }
    cout<<sum<<endl;


    // basic of while loop
    int num = 40;
    while(num != 0){
       cout<<"my current number is "<<num<<endl;
       num--;
    }


    // basic of do-while loop
    // it is generallly oppsite of the while looop
    int numb = 10;
    do{
        cout<<"this is my current number "<<numb<<endl;
        numb --;
    } while(num != 0);

    return 0;
}