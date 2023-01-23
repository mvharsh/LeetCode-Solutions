#include<string>
class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        char c;
        for(int i=0; i<s.length(); i++)
        {
         c = s[i];
         if(c==' ')
           continue;
         else if(c>=65 && c<=90)
         {
            c += 32;
            st += c;
         }
         else if(c>=97 && c<=122)
         {
            st += c;
         }
         else if(c>=48 && c<=57)
         {
            st += c;
         }
         else
          continue;
        }
        string rev_st = st;
        reverse(st.begin(), st.end());
        cout<<rev_st<<endl;
        cout<<st;
        if(rev_st == st)
            return true;
        else 
            return false;
    }
};
