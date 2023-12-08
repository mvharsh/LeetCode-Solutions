#include<vector>
class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        string ans;
        vector<string> st;
        for(int i=0; i<n-2; i++)
        {
         if((num[i]==num[i+1]) && (num[i+1]==num[i+2]))
         {
             string triplet = "";
             triplet += num[i];
             triplet += num[i + 1];
             triplet += num[i + 2];
             cout<<triplet<<endl;
             st.push_back(triplet);
         }
        }
        if (!st.empty()) {
            ans = *max_element(st.begin(), st.end());
        }
        return ans;
    }
};
