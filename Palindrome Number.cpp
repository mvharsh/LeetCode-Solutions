class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long int rev = 0;
        int r;
        while(a>0)
        {
         r = a%10;
         rev = rev*10 + r;
         a = a/10;
        }
        if(rev==x)
          return true;
        else
          return false;
    }
};
