#include<iostream>
using namespace std;
void swapalternate(int arr[], int n ){
    for(int i = 0 ; i< n ; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[], int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int even[]={1,2,3,4,5,6};
    int n = 6;
    int odd[] ={1,4,3,2,5};
    int m = 5;
    swapalternate(even,6);
    swapalternate(odd,5);
    print(even,6);
    print(odd,5);
    return 0;

}