 //Question link:https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
 public:
    int findUnsortedSubarray(vector<int>& nums) {
        int maxi=nums[0];
        int end=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<maxi)
            {
               end=i;
            }
           maxi=max(nums[i],maxi);
        }
        int start=0;
        int mini=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--)
        {
             if(nums[i]>mini)
             {
                  start=i;
             }
             mini=min(mini,nums[i]);
        }
        return end-start+1;
    }
};