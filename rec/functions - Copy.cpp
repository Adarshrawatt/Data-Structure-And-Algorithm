 #include<iostream>
 using namespace std;

//  prime function
 int reverse(int number){
     int reverse = 0;
     while(number>0){
         int remainder = number % 10;
         reverse = reverse*10 + remainder;
         number = number / 10;
     }
     return reverse;
 }


// fabonacci function
void fabonacci(int last){
int first = 0;
int second = 1;
for(int a=0; a<=last; a++){
cout<<first<<endl;
int third = first + second;
first = second;
second = third;
}
return;
}




// factorial function 
void fact(int num){
    int fac = 1;
    while(num>0){
        fac = fac * num;
        num -= 1;
    }
    cout<<fac<<endl;
    return;
}


// fuction of ncr
int nCr (int n, int r){
    int term = n;
    int term2 = r;
    int fac1 = 1;
    int fac2 = 1;
    while(n>0){
        fac1 = fac1 * n;
        n--;
    }
    cout<<fac1<<endl;
    while(r>0){
        fac2 = fac2 * r;
        r--;
    }
    cout<<fac2<<endl;
    int ans = fac1 / ((term-1)*fac2);
    return ans;
}


// pattern question function 
void pattern(int n , int r){
    for(int row=1; row<=n; row++){
        for(int colomn=1; colomn<=row; colomn++){
            if(n==1){
                
            }
        }
    }
}
int main(){

int ans = reverse(234);
cout<<ans;

int num = 10;
fabonacci(num);

int num2 = 5;
fact(num2);

int n = 2;
int r = 2;
int ans2 = nCr(n,r);
cout<<ans2<<endl;


     return 0;
 }