#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    //optimal for the array with positives and negatives
  //----------------------------------------------------------
    //using hashmap
    map<long long, int> preSumMap;
    long long sum =0;
    int maxLen = 0;
    for(int i =0; i<nums.size(); i++){
        sum += nums[i]; //calculating prefix sum

        if(sum == k){ //simple condition
            maxLen = max(maxLen, i+1);
        }

        //concept of x, x-k => check if x-k is present in hashmap
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            //present
            maxLen = max(maxLen , (i - preSumMap[rem]));
        }

        //incase of zeroes and negatives may be same sum is repeating to get the arrya with longest length
        if(preSumMap.find(sum) == preSumMap.end()){
            //not present previous
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
