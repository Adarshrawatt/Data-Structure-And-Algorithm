#include<iostream>
using namespace std;
int main(){
    // types of operators 
    // i) Airthmetic operators like plus-minus etc
    // ii) Relational operators like greater nd less than etc 
    // iii) Logical operators
    // iv) Bitwise operator
    // v) Assingment operator



    // firstly discuss about Airthmetic
    // relation btween ++a  and  a++
    int t = 4;
    int e = ++t;                 // it gives the value 5, it increment a instantly(pre-incrementor)
                                 // because it firstly increse than applly
    int c = t++;                 // it give the value 4, if we comment out the previous one (post-incrementor)

    // question 1 
    int i = 1;
    int j = 2;
    int k;
    //  1   2   1      2     3     4
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<k<<" "<<i<<" "<<j<<" "<<endl;


    // question number 2
    int m = 0;
    //   0      0    1      1
    m = m++ - --m + ++m - m--;
    cout<<m<<endl;
   

    // question number 3
    int p=1;
    int q=2; 
    int r=3; 
    int s;
    //   1     2     3
    s = p-- - q-- - r--;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;
    cout<<s<<endl;




    // discuss about relational


    // ==  ->  it indicates the equal to sign and it always return boolean value like true and false
    //example
    int a = 8; int b = 8;
    if(a==b){
        cout<<"hello"<<endl;
    }

    // !=  ->  it indicate the value of not equal to it always return boolean value only
    if(a != b){
        cout<<"not equals to"<<endl;
    } else {
        cout<<"equals to"<<endl;
    }

    // >  ->it indicates greater than
    // <  ->it indicates less than
    // >= ->it indicates greater than or equals to
    // <= ->it indicates less than or equals to



    // discuss about logical operators
    
    // i) and operator (&&)
    if(a>=2 && a%2==0){             //it this case both the condition are necessory for the operation
        cout<<"operation success"<<endl;
    }

    // ii) or operator (||)
    if(a<=2 || a%2==0){
        cout<<"opertion success"<<endl;
    }

    // iii) not operator
    if(a != 5){                     //generally convert true value into false and false value into true
        cout<<"operation succed"<<endl;
    }



    //bitwise operator

    // i) and bitwise operator  -> it generally convert   0 0 1      denoted by (&)
    //                                                    0 1 1
                                                       // 0 0 1
    // ii) or bitwise operator  -> it generally convert   0 0 1      denoted by (|)
    //                                                    0 1 1
                                                       // 0 1 1
    // iii) XOR bitwise operator  -> it generally convert 0 0 1      denoted by (^) generally converts same elemnt into zero
    //                                                    0 1 1
                                                       // 1 1 0
    // iv) ones bitwise operator  -> it generally convert 0 0 1      denoted by (~) it  convert 1 to 0 and 0 to 1
                                                       // 1 1 0
    // v) left-side bitwise operator  -> 4<<1 it shifted the value by one in left direction   denoted by (<<)
    //                                                    0 0 0 1
                                                       // 0 0 1 0
                                                //formula-> a<<n = a*2^n
    // v) left-side bitwise operator  -> 4<<1 it shifted the value by one in left direction   denoted by (>>)
    //                                                    0 0 1 0
                                                       // 0 0 0 1
                                                //formula-> a>>n = a/2^n



    //Assingment operators
    // i) = -> it generally assinged the value to right operand to left operand                                
    // ii) += -> it generally used to increase the vlaue of left operand by right operand                                
    // iii) -= -> it generally used to decrease the vlaue of left operand by right operand                                                                
    // iv) *= -> it generally used to multiple the vlaue of left operand by right operand                                                                
    // v) /= ->  it generally used to divide the vlaue of left operand by right operand
    



    //misicellanenous operator
    // i) sizeof() -> return the size of variable into bit
        int sizeofoperator;
        cout<<sizeof(sizeofoperator)<<endl;  // gives us 4 bit
    // ii) ternary or conditional operator -> if conditon is true than gives the value of x otherwise gives the value of Y
        // condition(sizeofoperator==null)

    // iii) cast -> convert one dataType to another dataType
        char convrt = 'a';
        int value = int(convrt);
        cout<<value<<endl; 

    // iv) & -> return the address of a variable
        int adrs = 4;
        cout<<&(adrs)<<endl;

    // v) Comma(,) -> used in a sequence of operator
        int cmm = (3,4,5,6,7,8);        // shows the last value
        cout<<cmm<<endl;

    // vi) pointer(*) -> it pointed towards the variables
        int target = 45;
        int *pnt = &(target);
        cout<<*pnt<<endl;    


     return 0;
}