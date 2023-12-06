#include <numeric> 

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>ans;
        for(int i=0; i<accounts.size(); i++)
        {
         ans.push_back(accumulate(accounts[i].begin(),accounts[i].end(),0));
        }
        return *max_element(ans.begin(),ans.end());;
    }
};
