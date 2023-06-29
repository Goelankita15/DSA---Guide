//link -> https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/
Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray. <- PROBLEM
//code 
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long maxSum = LONG_MIN;
    for(int i =0; i<n; i++){
        if(sum < 0){
            sum = 0;
        }
        
        sum += arr[i];
        maxSum = max(maxSum , sum);
        
    }
    if(maxSum < 0){
        maxSum = 0; // return empty subarray
    }
    return maxSum;
}
