
// Q : Given N string print unique string inlexographical order with frequwncy :
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main (){
    int n ;
    map<string,int>mp;
  
  
    cout<<"enter number of string:";
    cin>>n;
    for(int i = 0 ; i <n ; i++){
     string ans ;
     cin>>ans;
      mp[ans]++;
    }
    for(auto it : mp){
        cout<<"|"<<it.first<<"|"<<"|"<<it.second<<"|"<<endl;
    }
    return 0;
}
