class Solution {
public:

void combsum(vector<int>& candidates, int i, vector<vector<int>>& ans,vector<int>& comb, int target) {

    int n = candidates.size();

    if (target == 0) {
        ans.push_back(comb);
        return;
    }

    if (i == n || target < 0) {
        return;
    }

    // Include current element
    comb.push_back(candidates[i]);
    combsum(candidates, i, ans, comb, target - candidates[i]);
    comb.pop_back();

    // Exclude current element
    combsum(candidates, i + 1, ans, comb, target);
}

  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> comb;

    combsum(candidates, 0, ans, comb, target);

    return ans;
}
};