int longestSubarrayWithSumK(vector<int> a, long long k) {
    //Two pointer approach -> in case of positives || optimal approach

    //j moves add to sum
    //i moves when sum exceedes and shrinks the array
    int j = 0, i = 0;
    int maxLen = 0;
    long long  sum = a[0];
    int n = a.size();
    while(j < n){
        while(i <= j && sum > k){
            sum -= a[i];
            i++;
        }
        if(sum == k){
            maxLen = max(maxLen, j-i+1);
        }

        j++;
        if(j < n){
            sum += a[j];
        }
    }
    return maxLen;  
}
