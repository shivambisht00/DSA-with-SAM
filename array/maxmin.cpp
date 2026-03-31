#include<iostream>
using namespace std;
int max(int arr[], int n ){
    int maxelement = arr[0];
    for(int i = 0 ; i< n ; i++){
        if(arr[i]>maxelement){
            maxelement = arr[i];
        }
    }
    return maxelement;
}
int min(int arr[] , int n){
    int minelement = arr[0];
    for(int i = 0 ; i< n ; i++){
        if(arr[i]<minelement){
            minelement = arr[i];
        }
    }
    return minelement;
}


int main(){
    int arr[] ={1,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<< " max element is : " <<max(arr , n )<<endl;
   cout<< "min element is : "<<min(arr, n) ;
   return 0;
}