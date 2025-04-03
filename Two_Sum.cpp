class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int> m;
        for(int i=0;i<nums.size();i++){
            m[i]=nums[i];
            auto it =m.find(target-m[i]);
            if(it!=m.end()){
                vector<int> v;
                v.push_back(i);
                 v.push_back(it.second());
            }return v;
        }
    }
};
