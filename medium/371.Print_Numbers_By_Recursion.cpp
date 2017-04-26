class Solution {
public:
    /**
     * @param n: An integer.
     * return : An array storing 1 to the largest number with n digits.
     */
    
    void numbers(vector<int>& result, int num, int n, int length)
    {
        if(length == n)
        {
            if(num != 0)
                result.push_back(num);
            return;
        }
        
        for(int i = 0; i < 10; i++)
        {
            int tmp = num*10 + i;
            numbers(result, tmp, n, length + 1);
        }
    }
    vector<int> numbersByRecursion(int n) {
        vector<int> result;
        if(n <= 0)
            return result;
        int num = 0;
        for(int i = 0; i < 10; i++)
        {
            num = i;
            numbers(result, num, n, 1);
        }
        
        return result;
    }
};