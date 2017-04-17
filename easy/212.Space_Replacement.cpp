class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // Write your code here
        if(!string || length == 0)
            return 0;
        
        int spaceNumber = 0;
        for(int i = 0; i < length; i++)
        {
            if(string[i] == ' ')
                spaceNumber++;
        }
        
        int newLength = length + spaceNumber*2;
        int j = newLength;
        for(int i = length; i >= 0; i--)
        {
            if(string[i] == ' ')
            {
                string[j--] = '0';
                string[j--] = '2';
                string[j--] = '%';
            }
            else
            {
                string[j--] = string[i];
            }
        }
        return newLength;
    }
}; 