//Question link:https://leetcode.com/problems/bulls-and-cows/description/
class Solution {
public:
    string getHint(string secret, string guess) {
        int n=guess.size();
        int a=0;
        int b=0;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
            {
               a++;
            }
            else
            {
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }
        for(auto x:m1)
        {
            if(m2.find(x.first)!=m2.end())
            {
                b+=min(m2[x.first],x.second);
            }
        }
        
        return to_string(a)+"A"+to_string(b)+"B";
    }
};