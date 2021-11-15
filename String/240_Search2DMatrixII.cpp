class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;//rows
        int j=m-1;//cols
        while(i<n&&j>=0){
         if(target==matrix[i][j])   
             return true;
        if(target>matrix[i][j])i++;
        else j--;
        }
        return false;
    }
};
