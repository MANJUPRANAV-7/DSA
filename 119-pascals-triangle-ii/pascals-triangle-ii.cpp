class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> ans;
        int r = rowIndex;
        long long num = 1;
        ans.push_back(1);
        for(int i =0 ; i<r ; i++){
            num*=(r-i);
            num/=i+1;
            ans.push_back(num);
        }
        return ans;
    }
};