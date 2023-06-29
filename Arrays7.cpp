//sort the 0's 1's 2's
//=> Bruteforce just apply sort
//=> better => count sort
//=> best => DUTCH NATIONAL FLAG ALGORITHM => 3 pointer approach

0      low-1   low      mid-1    mid       high     high+1        n-1
^---------^    ^-------------^   ^-----------^       ^-------------^
  0s              1s              unsorted 0/1/2          2s

Rule 1 -> from 0 to low -1 all elemeents are 0s sorted
Rule 2 -> from low -> mid-1 all eleemnts are 1s sorted
Rule 3 -> from mid -> high all elements are unsorted 
Rule 4 -> from high+1 -> n-1 all elements are sorted and are 2s


1) initiallly array is unsorted so put mid on 0 and high on n-1 according to Rule 3 and low on 0th also
2) arr[mid] == 0 then it should be between 0 to low-1 as Rule 1 so,
   swap(arr[mid], arr[low])   
    low++;    as all 0s in 0 to low-1 range
    mid++;    as all 1s in low to mid-1 range
3) arr[mid] == 1 then it sholud be in low to mid-1 range so, 
   mid++; Rule 2
4) arr[mid] == 2 then it should be in high+1 to n-1 range so,
   swap(arr[mid], arr[high]) 
    high-- ; high contains 2 but it sholud be high +1 so decreses



loop till mid <= high



//code
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

