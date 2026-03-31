#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
   int st = 0 , en = n-1;
    while(st<en){
        swap(arr[st++],arr[en--]);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}