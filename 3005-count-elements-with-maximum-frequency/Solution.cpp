class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int maxi = -1;
        for(auto i:mp){
            if(i.second > maxi){
                maxi = i.second;
            }
        }

        int count = 0;
        for(auto i:mp){
            if(maxi == i.second) count = count + i.second;
        }
        return count;
    }
};