class Solution {
public:
    int bs(vector<int>& nums , int st , int end , int target){
        if (st<=end){
        int mid = st - (st-end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return bs(nums,st,mid-1,target);
        }
        else{
            return bs(nums,mid+1,end,target);
        }
        }
        else{
            return -1;
        }
    }
    
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        return bs(nums, st ,end , target);
    }
};