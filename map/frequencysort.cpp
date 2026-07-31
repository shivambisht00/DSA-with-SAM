#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

bool mysort(const pair<char,int>&a, const pair<char,int>&b){
    return a.second> b.second;
}
class solution{
    public:
    string frequencysort(string s){
        unordered_map<char,int>mp; // cretate a unordered map to get there frequency 
        for(auto ch : s){ 
            mp[ch]++;
        }
        vector<pair<char,int >>vec(mp.begin(),mp.end());// creating a vector pair initialize with sorted order of map 
        sort(vec.begin(),vec.end(),mysort);// yha mysort batayeaga ki in dono me se kise phle or kise baad me sorted order mai rakhna h
        string result = "";
        for(auto const & [ch, freq]:vec){
            result+= string(freq,ch);// ye batayea ki wo number ki frequency kya h or use kitne bar repeat karna h (3,a) a ab 3 bar repeat hoga aaa
        }
        return result;
    }
};

int main(){
    string s = "Aabb";
    solution an;
    string ans = an.frequencysort(s);
    cout<<ans;
}
