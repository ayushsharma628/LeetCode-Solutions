class Solution {
public:
    bool isPalindrome(int x) {
        long long int pali,sum=0,num;
        num=x;
        while(x>0)
        {
            pali = x%10;
            sum=sum*10+pali;
            x/=10;
        }
        if(sum==num)
        return true;

        return false;
    }
};