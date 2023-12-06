class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int a[256] = {0};
       int l=0, r=0;
       int ans = 0;
       while(r < s.length())  
       {
         a[s[r]]++;
         while(a[s[r]] > 1)
         {
          a[s[l]]--;
          l++;
         }
         ans = max(ans, r-l+1);
         r++;
       }
       return ans;
    }
};
