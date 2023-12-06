class Solution {
public:
    int numberOfMatches(int n) {
        int match, adv, total=0;
        while(n!=1)
        {
          if(n%2==0)
          {
           match = n/2;
           adv = n/2;
          }
          else
          {
           match = (n-1)/2;
           adv = (n-1)/2 + 1;
          }
          n = adv;
          total += match;
        }
        return total;
    }
};
