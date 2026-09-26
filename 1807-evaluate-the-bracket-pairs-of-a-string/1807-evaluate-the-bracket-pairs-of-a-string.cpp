class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        string result = "";
        unordered_map<string,string>mp;
        for(auto & x: knowledge){
            mp[x[0]]=x[1];// initialize 2d 
        }

        for(int i = 0 ; i < s.size(); i++){
            if(s[i]=='('){
             string str = "";
              i++;
               while(s[i]!=')'){
                    str += s[i];
                    i++;
                }
       if(mp.find(str)!=mp.end()){
        result += mp[str];
       }
       else{
        result+='?';
       }
            } // agar ( ye mila to hi ye kam hoga 
    else{ // nhi to direct store
        result +=s[i];
    }

    }
        return result;
    }

};