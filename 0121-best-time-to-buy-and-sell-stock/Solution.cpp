class Solution {
public:
    int maxProfit(vector<int>& arr) {
    //    int buy = INT_MAX;
    //    int sell = INT_MIN;
    //    for(int i=0; i<arr.size(); i++){
    //     if(arr[i] < buy){
    //         buy = arr[i];
    //     }

    //     if(buy == arr[arr.size()-1]){
    //         return 0;
    //     }
    //    } 

    //    for(int i=buy; i<arr.size(); i++){
    //     if(arr[i] > sell){
    //         sell = arr[i];
    //     }
    //    }
    //    return sell-buy;
     int profit =0;
     int buy = arr[0];
    for(int i=1;i<arr.size();i++){
       buy = min(buy,arr[i]);
       profit =max(profit,arr[i]-buy);
    }
    return profit;
    }
};