class Solution {
public:
    vector<vector<int>> ss(vector<int>& nums ,vector<int> &subset, vector<vector<int>> &ans , int i){
        if(i==nums.size()){
            ans.push_back(subset);
            return ans;
        }
        subset.push_back(nums[i]);
        ss(nums,subset,ans,i+1);
        subset.pop_back();
        ss(nums,subset,ans,i+1);
        return ans;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int count = 0;
        return ss(nums,subset,ans,0);
    }
};