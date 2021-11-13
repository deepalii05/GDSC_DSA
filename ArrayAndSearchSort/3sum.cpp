#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
vector<vector<int>>res;
if(nums.size()<3)
return res;
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size()-2;i++)
{if(i>0 && nums[i]==nums[i-1])
{continue;cout<<"continuing";}
 int j = i+1,k=nums.size()-1;
 while(j<k){
     if(nums[j]+nums[k]+nums[i]==0)
     {
        vector<int>v;
         v.push_back(nums[i]);
         v.push_back(nums[j]);
         v.push_back(nums[k]);
         res.push_back(v);
         while(j+1<k && nums[j]==nums[j+1])
             j++;
         while(k-1>j && nums[k]==nums[k-1])
             k--;
         j++;
         k--;
     }
     else if(nums[j]+nums[k]+nums[i]>0)
         k--;
     else
         j++;
 }
}
return res;
}
};
int main(){
    Solution S;
    vector<int>nums;
    vector<vector<int>>res;
    int n;
    cin>>n;
    int i=0;
    while(n){
        cout<<"enter values in num ";
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    res=threeSum(nums);
    for(i:res.size()){
        for(j:res[0].size()){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}