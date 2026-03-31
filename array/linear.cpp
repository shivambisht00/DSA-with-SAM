#include<iostream>
using namespace std;

int linearsearch(int arr[], int n , int target){
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==target){
            int s = i;
            return s;
        }
    }
    return -1;
}



int main(){
    int arr[] = { 1,2,5,6,7,8,0};
    int n = sizeof(arr)/sizeof(arr[0]);
   int ans = linearsearch(arr,n , 0);
   if(ans ==-1){
    cout<<"element not found in array ";  
   }
   else {
        cout<<"element found in array "<<ans ;
   }
    return 0;
}