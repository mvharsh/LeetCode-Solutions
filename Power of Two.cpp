class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int x=0; x<31; x++)
        {
         if(pow(2,x)==n)
            return true;
        }
        return false;
    }
};
