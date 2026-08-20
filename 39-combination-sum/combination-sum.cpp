class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        function<void(int, int)> backtrack = [&](int start, int target) {
            if (target == 0) {
                ans.push_back(curr);
                return;
            }

            for (int i = start; i < candidates.size(); i++) {
                if (candidates[i] > target)
                    continue;

                curr.push_back(candidates[i]);

                // i, not i+1, because we can reuse the same number
                backtrack(i, target - candidates[i]);

                curr.pop_back();
            }
        };

        backtrack(0, target);
        return ans;
    }
};