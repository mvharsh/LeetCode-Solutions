class Solution {
public:
    int strStr(string haystack, string needle) {
        string s = "";
        int i;
        if(haystack.length()<needle.length())
            return -1;
        for(i=0; i<=haystack.length()-needle.length(); i++)
        {
         for(int j=i; j<needle.length()+i; j++)
         {
           s += haystack[j];
         }
         if(s==needle)
            return i;
         s = "";
        }
        return -1;
    }
};
