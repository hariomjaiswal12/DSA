class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //     if(nums[i] + nums[j] == target){
        //         // ans.push_back(i);
        //         // ans.push_back(j);
        //         return {i,j};
        //         break;
        //         }
        //     }
        // }
        // return ans;

    //METHOD 2:

        // int i=0, j=nums.size()-1;

        // while(i<=j){
        //     if(nums[i]+nums[j] == target){
        //         return {i,j};
        //     }

        //     else if(nums[i]+nums[j] > target){
        //         j--;
        //     }

        //     else{
        //         i++;
        //     }
        // }
        // return {};

        // METHOD 3:
        
        for(int i=0; i<nums.size(); i++){
            int new_target = target-nums[i];
       //  sort(nums.begin(),nums.end());
            int s=i+1,e=nums.size()-1;
            while(s<=e){
                int mid = (s+e)/2;

                if(nums[mid] == new_target){
                    return {i,mid};
                }
                else if(nums[mid] > new_target){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
        }
        return {};
    }
};