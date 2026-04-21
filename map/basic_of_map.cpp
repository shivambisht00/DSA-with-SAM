#include<iostream>
#include<string>
#include<map>
using namespace std;
 int main(){
    map< int ,string>mp;
    mp[1]="shivam";
    mp[2]= "Bisht ji";
    mp.insert({3,"basic of map"});
    for(auto it : mp ){
    cout<<"key: "<< it.first<<"|"<<"value: " <<it.second<<"|"<<endl;
 }
  auto it = mp.find(2);
  if(it != mp.end()){
    cout<<"find succesfully ";
  }
  else
  cout<<" an erroe occur";
  if(it!=mp.end()){
    mp.erase(it);
  }
  cout<<endl;
  cout<<"after erase it new size of map is"<<mp.size();
  cout<<endl;
  if(it!=mp.end()){
    mp.clear();
  }
  cout<<"after clear the size of map is\t "<<mp.size();
return 0;
 }
