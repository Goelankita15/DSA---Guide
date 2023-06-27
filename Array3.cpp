//Move all 0s at end
//-------------------
//--------------------
/*
//BRUTEFORCE
copy all non zero elements in another array then copy it in original and put 0 on remaining ositions

TC -> O[n] || SC -> O[N]
//--------------------------------------------------------------------------------------------------
//optimal
TWO POINTER APPROACH
put i on ist zero and put j on ist non zero after i 
if(j> i && arr[j] != 0) swap , i++ j++;
else if(arr[j] == 0) j++;
break the loop when j > n;

*/


//==================================================================================================
//UNION OF TWO SORTED ARRAYS
//--------------------------------------------------------------------------------------------------
/*
BRUTEFORCE
-------------------
put in set O[logN] TC and SC O[n]

OPTIMAL
--------
TWO POINTER APPROACH
 check a[i] <= a[j] && uninon me not present then push elese i++;
simailarly for j 
if loop breaks but contain the eleent then handle that case also

TC => O[n1 + n2] 
SC => O[n1+n2] to solve 
*/

//Checking just last element of the array -> v.back()

//-============================================================================================
 /*
INTERSECTION OF SORTED ARRAYS
BRUTEFORCE -> check for each element and mark it tobe visted TC -> O[n^2]
Two Pointer approach
if(i> j) j++;
(j>i) i++;
elese equal -> put and marked themas visited i++ j++;
TC -> O[n+m] SC -> O[1]
*/
