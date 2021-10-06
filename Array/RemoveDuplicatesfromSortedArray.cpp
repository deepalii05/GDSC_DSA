
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size(),i=0;
        if(k<1) return 0;
        for(int j=1;j<k;j++)
       {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
};
