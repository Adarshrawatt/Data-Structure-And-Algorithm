#include<bits/stdc++.h>
using namespace std;

 
 bool ifPossible(int arr[], int size, int m, int mid){

     int studentCount = 1;
     int pageSum = 0;

     for (int  i = 0; i < size; i++)
     {
         if (pageSum + arr[i] <= mid)
         {
             pageSum += arr[i];
         }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
     }
     return true;
 }



int main(){

     int arr[4] = {10,20,30,40};
     int size = 4;
     int sum = 0;
     int ans = -1;  //initialised answer with -1;
     int m = 2;  // number of students

     for (int  i = 0; i < size; i++)
     {
         sum += arr[i];
     }
     
     int s = 0;
     int e = sum;
     int mid = s + (e - s) / 2;
     while(s<=e){
         mid = s + (e - s) / 2;
         if (ifPossible(arr,size,m,mid))
         {
             e = mid - 1;
             ans = mid;
         }
         else
         {
             s = mid + 1;
         }
     }

     cout<<ans;

    return 0;
}