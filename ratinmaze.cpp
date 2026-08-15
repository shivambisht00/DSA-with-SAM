#include<iostream>
#include<string>
#include<vector>
using namespace std;


class solution{
    public:


void maze(vector<vector<int>>&mat, int row , int col , vector<string>&ans , string path){
    int n = mat.size();
    // base case 1 
    if( row < 0|| col <0|| row>= n || col >= n || mat[row][col]==0||mat[row][col]==-1){
        return ;
    }
    // base case 2 
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;

    }

    mat[row][col] = -1; // visited
    maze(mat,row+1,col,ans,path+"D"); //. down call
    maze(mat,row-1,col,ans,path+"U"); // up call
    maze(mat,row,col+1,ans,path+"R"); // right call
    maze(mat,row,col-1,ans,path+"L"); // left call 

    mat[row][col] =1 ; // backtrack unvisited
}

    vector<string>findpath(vector<vector<int>>&mat){
        int n = mat.size();
        // vector<vector<bool>>vis(n , vector<bool>(n,false)); extra space 
        vector<string>ans;
        string path;
         maze(mat,0,0,ans,path);
         return ans;

    }
};
int main(){
    vector<vector<int>>mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    solution obj;
    vector<string>ans;
   ans =  obj.findpath(mat);
   for(string path : ans ){
    cout<<path<<" ";
    cout<<endl;
   }

}
