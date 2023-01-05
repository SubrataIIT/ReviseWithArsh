//Question link:https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>m;
        int ct=0;
        int j=0;
        vector<int>v(3,0);
       for(int i=0;i<s.size();i++)
       {
           
           v[s[i]-'a']++;
           while(v[0] && v[1] && v[2])
           {
               ct+=s.size()-i;
               v[s[j]-'a']--; //remove 1st element to create next window
               j++;
           }
           
       }
       return ct;
    }
};