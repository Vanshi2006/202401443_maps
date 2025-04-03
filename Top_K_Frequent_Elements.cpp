class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        multimap<int,int,greater<int>> n;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++; 
        }
        for(auto it: m){
           n.insert({it.second,it.first});
        }vector<int> v;
        for(auto it: n){
            if(k>0){
                v.push_back(it.second);
            } if(k==0){
            break;
         }
         k--; 
        }return v;
    }
};
