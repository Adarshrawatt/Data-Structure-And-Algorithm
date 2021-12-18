#include<iostream>
using namespace std;
int main()
{

    // basic if else condition here
    int rupee;
    rupee = 500;
        if(rupee>500){
            if(rupee>1000){
            cout<<"join club with isha"<<endl;
       } else {
            cout<<"go to resturant with esha"<<endl;
       }
    } else{
        cout<<"I will go with mansi"<<endl;
    }




    // small level increase in this case
    // find the greater number among these

    int a,b,c;
    a = 56;
    b = 34;
    c = 92;
    if(a>b){
        if(a>c){
            cout<<"A is a greatest one"<<endl;
        } else {
            cout<<"C is a greatest one"<<endl;
        }
    } else {
        if(b>c){
            cout<<"B is a greatest one"<<endl;
        } else {
            cout<<"C is a greatest one"<<endl;
        }
    }



    // odd even using if-else statement
    int number = 553;
    cout<<"my number is "<<number<<endl;
    if(number%2==0){
        cout<<"the number you enter is a even number "<<endl;
    } else {
        cout<<"the number you enter is a odd number "<<endl;
    }

    


    return 0;
}