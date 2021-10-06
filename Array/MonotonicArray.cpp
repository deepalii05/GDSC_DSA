class Solution {
public:
    bool isMonotonic(vector<int>& num) {
        bool increasing=true;
        bool decreasing=true;
        for(int i=0;i<num.size()-1;++i)
        {if(num[i]<num[i+1])
           decreasing=false;
         if(num[i]>num[i+1]) 
           increasing=false; 
        }
        return increasing||decreasing;
}
};
