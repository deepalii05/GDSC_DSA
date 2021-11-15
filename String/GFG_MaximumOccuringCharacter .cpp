class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int n = s.length();
    sort(s.begin(), s.end());
    int max = 0;
    int count = 1;
    char ans;
    for (int i = 0; i <= n; i++)
    {if ((i == n) || (s[i] != s[i+1]))
        {
            if (max_count < count)
            {
                max= count;
                ans = s[i];
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }
    return ans;
    }
    

};
