class Solution {
public:
    int fib(int n) {
        if (n==0)
         return 0;
        vector<int>fibo;
        int a,b,c;
        a=0;
        b=1;
        fibo.push_back(a);
        fibo.push_back(b);
        for(int i=2; i<=n; i++)
        {
         c = a+b;
         fibo.push_back(c);
         a = b;
         b = c;
        }
        int l = fibo.size();
        return fibo[l-1];
    }
};
