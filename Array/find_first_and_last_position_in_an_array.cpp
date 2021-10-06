class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        if(nums[0]>target||nums[n-1]<target){
            int x=-1;
            ans.push_back(x);
            ans.push_back(x);
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            if(target==nums[i])
                ans.push_back(i);
        }if(ans.size()>2){
            int a=ans[0];
            int b=ans[n-1];
            ans.clear();
            ans.push_back(a);
            ans.push_back(b);
        }
        if(ans.size()==0||nums.size()==0){
             int x=-1;
            ans.push_back(x);
            ans.push_back(x);
        }
        return ans;
        }
    };
