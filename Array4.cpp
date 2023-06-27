//Missing Number from 1 to n
/*
Bruteforce -> sort and find OR two loops to find the number exists 
   Tc -> O[n^2]
Better -> calculate freq of each element and then if f[i] == 0 retrun i;
   Tc -> O[n] and Sc -> O[n]
Optimal1 -> sum_natural - sum_array = missing number || Little more space than Xor as Bitwise operations are fast
Optimal2 -> xor -> array and xor it with 1to n natural numbers then this gives missing number 
   TC -> O[n] and Sc -> O[1]
*/

//Maximum consecute ones
/*
check if arr[i] == 1 cnt and if it 0 then store as max;
Max will be retured
*/

//NUMBER that appears once
/*
-> two loops check if a number appear once or twice => Brute
-> hashing/mapping(in case of big numbers and negatives hashing cannot be used)  => better
-> Xor all the elements => best
*/
