#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        vector<int>b;
        while(head!=NULL)
        {
         a.push_back(head->val);
         head = head->next;
        }
        b = a;
        int n = b.size();
        reverse(b.begin(), b.end());
        for(int i=0; i<n; i++)
        {
         if(a[i]!=b[i])
          return false;
        }
        return true;
    }
};
