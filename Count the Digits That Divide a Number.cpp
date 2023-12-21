class Solution {
public:
    int countDigits(int num) {
        int r, n = num, count=0;
        while(n>0)
        {
            r = n%10;
            if(num%r==0)
                count++;
            n/=10;
        }
        return count;
    }
};
