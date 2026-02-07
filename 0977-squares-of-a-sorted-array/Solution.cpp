class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        // vector<int> v1;
        // vector<int> v2;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]<0){ v1.push_back(nums[i]);}
        //     else{ v2.push_back(nums[i]); }
        // }
        // for(int i=0; i<v1.size(); i++){
        //     v1[i] = v1[i] * v1[i];
        // }
        // for(int j=0; j<v2.size(); j++){
        //     v2[j] = v2[j] * v2[j];
        // }
        // reverse(v1.begin(),v1.end());
        // int i = 0;
        // int j = 0;
        // vector<int> ans;
        // while(i<v1.size() && j<v2.size()){
        //     if(v1[i]<v2[j]) { 
        //         ans.push_back(v1[i]);
        //         i++;
        //     }
        //     else{
        //         ans.push_back(v2[j]);
        //         j++;
        //     }
        // }
        // while(i<v1.size()){
        //     ans.push_back(v1[i]);
        //     i++;
        // }
        // while(j<v2.size()){
        //     ans.push_back(v2[j]);
        //     j++;
        // }
        // return ans;
        
        int n=nums.size();
        vector<int> ans(n);
        int l=0;
        int r=n-1;
        int pos=n-1;
        while(l<=r){
            if(abs(nums[l]) < abs(nums[r])){
                ans[pos] = nums[r]*nums[r];
                pos--;
                r--;
            }
            else{
                ans[pos] = nums[l]*nums[l];
                pos--;
                l++;
            }
        }
        return ans;
    }
};