class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*int n=nums.size()-1;
        int i;
        if(target>nums[n])
            return n+1;
        if (target<=nums[0])
            return 0;
        if(target==nums[n])
            return n;
        if(target>nums[n/2])
        for(i=n/2+1;i<=n;n++){
            if(target<=nums[i]){
                break;
            }
        }
        else if(target<nums[n/2])
            for(i=0;i<n/2;i++)
                if(target<=nums[i])break;
        else if(target==nums[n/2])
            return n/2;
        return i;*/
        /*
        if(target>nums[n])
            return n+1;
        if (target<=nums[0])
            return 0;
        if(target==nums[n])
            return n;
        if(n+1>=2){
            if(nums[0]<target){
                if(nums[1]>target)
                    return 1;
                if(nums[1]==target)
                    return 2;
            }
                
            if(nums[n-1]<target&&nums[n]>target)
                return n;
        }
            
        int start=0,end=n;
        while(start!=end){
            int mid=start+(end-start)/2;
            if(target>mid){start=mid;end=n;}
            else if(target<mid){start=0;end=mid;}
            else if(target==mid)return mid;
            if(end-start<2) return start;
        }
        return 0;*/
        return lower_bound(nums.begin(),nums.end(),target) - nums.begin();
    }
};
