class Solution {
public:
set <vector<int>> s;
    void combSum(vector<vector<int>> &ans ,vector<int>& comb , int t , vector<int> candidates , int i){
        if(i==candidates.size()  || t<0){
            return ;
        }
        if(t==0){
            if(s.find(comb)==s.end()){
            ans.push_back({comb});
            s.insert(comb);
            return;
            }
        }
        comb.push_back({candidates[i]});
        combSum(ans , comb , t-candidates[i] , candidates , i+1);
        combSum(ans , comb , t-candidates[i] , candidates , i);
        comb.pop_back();
        combSum(ans , comb , t , candidates , i+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ;
        vector <int> comb;
        combSum(ans , comb , target , candidates , 0);
        return ans;
    }
};