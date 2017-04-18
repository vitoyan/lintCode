class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if( n <= 0)
            return 0;
        if(n == 1)
            return 1;
        int first = 0;
        int second = 1;
        int result = 0;
        for(int i = 2; i < n; i++)
        {
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};
