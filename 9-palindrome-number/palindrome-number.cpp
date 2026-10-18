class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int left=0;
        int right=s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            if(s[left]!=s[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
        
    }
};