class Solution {
public:
    void combinationSumHelper(vector<int> candidates, vector<vector<int>>& ans,vector<int>& v,int target,int i ){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[i]<=target){
        v.push_back(candidates[i]);
        combinationSumHelper(candidates,ans,v,target-candidates[i],i);
            v.pop_back();
        }
        combinationSumHelper(candidates,ans,v,target,i+1);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        combinationSumHelper(candidates,ans,v,target,0);
        return ans;
    }
};