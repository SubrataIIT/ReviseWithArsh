//Question link:https://leetcode.com/problems/combination-sum-iii/description/
class Solution {
public:
void func(int start,int k,int n,vector<int>&res,vector<vector<int>>&ans)
    {
        if(k<0|| n<0) return;
        
        if(k==0 && n==0)
        {
             ans.push_back(res);
             return;
        }
        for(int i=start;i<=9;i++)
        {
           res.push_back(i);
           func(i+1,k-1,n-i,res,ans);
           res.pop_back();//Backtracking
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>ans;
       vector<int>res;
       func(1,k,n,res,ans);
       return ans; 
    }
   


};