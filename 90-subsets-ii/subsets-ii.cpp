class Solution {
public:
    void subsets(vector<int> & nums , vector<vector<int>>&ans , vector<int>& ss , int i){
        if(i == nums.size()){
            ans.push_back(ss);
            return;
        }
        ss.push_back(nums[i]);
        subsets(nums , ans , ss , i+1);
        ss.pop_back();
        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1] ){
            idx++;
        }
        subsets(nums, ans , ss , idx);
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort (nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> ss;
        subsets(nums , ans , ss, 0);
        return ans;
    }
};