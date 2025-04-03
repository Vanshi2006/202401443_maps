class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
m[nums[i]]=i;
        }int maxi=0;int t=1;int store;int k=0;
     for(auto it:m){
     
if(k>0&&it.first-store==1)t++;
else t=1;
store =it.first;
maxi=max(t,maxi);k++;
     }return maxi;
    }
};
