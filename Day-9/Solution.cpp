class Solution {
public:
    bool isPerfectSquare(int num) {
        float num1 = sqrt(num);
        int num2 = sqrt(num);
        if(num1-num2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
