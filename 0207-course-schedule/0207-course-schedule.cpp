class Solution {
public:
bool dfs(int node ,vector<int>&vis,vector<int>&path,vector<vector<int>>&adj){
    vis[node]=1;
    path[node]=1;
    for(auto adjj:adj[node]){
        if(!vis[adjj]){
            if(dfs(adjj,vis,path,adj)==true){
                return true;
            }
           
        }
         else if(path[adjj]){
                return true;
            }
    }
    path[node]=0;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        
        for(auto p:prerequisites){
            adj[p[1]].push_back(p[0]);
        }
        vector<int>vis(numCourses,0);
        vector<int>path(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,vis,path,adj)==true){
                    return false;
                }
            }
        }
        return true;

        
    }
};