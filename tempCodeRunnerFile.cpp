#include<iostream>
using namespace std;


void swapalter(int arr[], int n ){
    for(int i = 0 ;  i< n ; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int odd[]= {1,2,3,4,5};
   int n = 5;
    int even[]= {1,2,3,4,0,5};
    int m = 6;
    swapalter(odd,5);
    swapalter(even,6);
    printArray(odd,5);
    printArray(even,6);
   return 0;
}