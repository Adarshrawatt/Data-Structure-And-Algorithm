#include<iostream>
using namespace std;
int main()
{

    // for interger integer which occupies space of 4
    int num1; // declaration 
    num1 = 3; // initilisation
    cout<<"the size of int is "<<sizeof(num1)<<endl;


    // true occopies the space of 1 and false occupies the spaceof 0
    bool trueOrfalse; //declaration 
    trueOrfalse = true;
    cout<<"the size of true boolean is "<< sizeof(trueOrfalse)<<endl;


    // character occupies the space of 1
    char  character;
    cout<<"the space of character is "<< sizeof(character)<<endl;
     


    // float occupies the space of 4
    float flt;
    flt = 23.35;
    cout<<"the space of float is "<< sizeof(flt)<<endl;

    // long occupies the space of 4
    long int lng; 
    cout<<"longint ocuupies the space of "<< sizeof(lng)<<endl;


    // short ocuupies the space of 2
    short int shrt;
    cout<<"the short occupies the space of "<< sizeof(shrt)<<endl;
    return 0;
} 


