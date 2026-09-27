class Solution {
public:
    bool isPalindrome(string s) {
       string clear = "";
       for(char r:s)
       {
        if(isalnum(r))
        {
            clear+=tolower(r);
        }
       } 
      int left=0;
      int right=clear.length()-1;

       while(left<right)
       {
        if(clear[left]!=clear[right])
        {
            return false;
        }
        left++;
        right--;

       }
       return true;
    }
};
