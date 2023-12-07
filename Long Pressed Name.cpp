class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n1 = name.length();
        int n2 = typed.length();
        int i=0, j=0;
        while(i<n1 && j<n2)
        {
         if(name[i]==typed[j])
         {
           i++;
           j++;
         }
         else if(name[i]!=typed[j])
         {
           if(j>0 && typed[j-1]==typed[j])
           {
            j++;
           }
           else
           {
            return false;
           }
         }
        }
        while(j<n2)
        {
            if(typed[j]!=typed[j-1])
             return false;
            j++;
        }
        if(i>=n1 && j>=n2)
          return true;
        return false;
    }
};
