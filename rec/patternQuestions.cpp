#include<iostream>
using namespace std;
int main(){

    // simple rectangular pattern
    for(int rows=0; rows<=7; rows++){
        for(int colomn=0; colomn<=4; colomn++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // simple triangular pattern
    for(int row=0; row<=4; row++){
        for(int colomn=0; colomn<=row; colomn++){
            cout<<"* ";
        }
        cout<<endl;
    }



    //betterfly pattern
    for(int row=1; row<4; row++){
        for(int colomn=1; colomn<=row; colomn++){
            cout<<"*";
        }
        for(int colomn=row; colomn<4; colomn++){
            cout<<"  ";
        }
        // for(int colomn=row; colomn<4; colomn++){
        //     cout<<"T";
        // }
        for(int colomn=1; colomn<=row; colomn++){
            cout<<"*";
        }
         cout<<endl;
         }
    for(int row=4; row>=0; row--){
        for(int colomn=1; colomn<=row; colomn++){
            cout<<"*";
        }
        for(int colomn=row; colomn<4; colomn++){
            cout<<"  ";
        }
        for(int colomn=1; colomn<=row; colomn++){
            cout<<"*";
        }
         cout<<endl;
         }



    //  hollow rectangular pattern
    for(int rows=0; rows<=5; rows++){
        for(int colomn=0; colomn<=4; colomn++){
            if(rows==0||rows==5||colomn==0||colomn==4){
            cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }


    //half pyramid using number 
    for(int row=1; row<=5; row++){
        for(int colomn=1; colomn<=row; colomn++){
            cout<<row<<" ";
        }
        cout<<endl;
    }


    //floyd's triangle
    int sum = 1;
    for(int row=1; row<=5; row++){
        for(int colomn=1; colomn<=row; colomn++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }


    // inverted pattern
    for(int row=5; row>=1; row--){
        int sum = 1;
        for(int colomn=1; colomn<=row; colomn++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }


    // 0-1 pattern
    for(int row=1; row<=5; row++){
        for(int colomn=1; colomn<=row; colomn++){
            if((row+colomn)%2==0){
                cout<<"1 ";
            } else {
                cout<<"0 ";
            }
        }
         cout<<endl;
    }




    // rhombus pattern
    for(int row=0; row<=5; row++){
        for(int colomn=5; colomn>=row; colomn--){
            cout<<" ";
        }
        for(int colomn=0; colomn<=5; colomn++){
            cout<<"* ";
        }
        cout<<endl;
    }



    //number pattern
    for(int row=1; row<=5; row++){
        for(int colomn=5; colomn>=row; colomn--){
            cout<<" ";
        }
        int sum = 1;
        for(int colomn=1; colomn<=row; colomn++){
            cout<<sum<<" ";
            sum++;
        }
        cout<<endl;
    }



    // palindromic pattern
    for(int row=2; row<=6; row++){
        for(int colomn=5; colomn>=row; colomn--){
            cout<<" ";
        }
        for(int colomn = 1; colomn<row; colomn++){
            cout<<row-colomn;
        }
        for(int colomn = 2; colomn<row; colomn++){
            cout<<colomn;
        }
        cout<<endl;
    }



    //star pattern pyramid
    for(int row=1; row<=4; row++){
        for(int colomn=4; colomn>=row; colomn--){
            cout<<"   ";
        }
        for(int colomn=1; colomn<=row; colomn++){
            cout<<" * ";
        }
        for(int colomn=2; colomn<=row; colomn++){
            cout<<" * ";
        }
        cout<<endl;
        }
    for(int row=4; row>=1; row--){
        for(int colomn=4; colomn>=row; colomn--){
            cout<<"   ";
        }
        for(int colomn=1; colomn<=row; colomn++){
            cout<<" * ";
        }
        for(int colomn=2; colomn<=row; colomn++){
            cout<<" * ";
        }
        cout<<endl;
    }



    // zig-zag pattern
    for(int row=1; row<=3; row++){
        for(int colomn=1; colomn<=20; colomn++){
            if((row+colomn)%4==0){
                cout<<"*";
            }
            else if(row==2 && colomn==4){
            cout<<"*";
            }
            else if(row==2 && colomn==12){
            cout<<"*";
            }
            else if(row==2 && colomn==16){
            cout<<"*";
            }
            else if(row==2 && colomn==8){ 
            cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}