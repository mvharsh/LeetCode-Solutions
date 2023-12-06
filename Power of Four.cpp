class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int x=0; x<31; x++)
        {
         if(pow(4,x)==n)
            return true;
        }
        return false;
    }
};
