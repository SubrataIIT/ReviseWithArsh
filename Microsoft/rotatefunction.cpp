//Question link:https://leetcode.com/problems/rotate-function/
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int func=0;
        int sum=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            func+=i*nums[i];
            sum+=nums[i];
        }
        res=func;
        for(int i=1;i<nums.size();i++)
        {
            func=func+sum-nums.size()*nums[nums.size()-i];
            res=max(res,func);
        }
        return res;
    }
};