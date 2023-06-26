//Arrays
//------
//=> Global array max size -> 10^7 || local array size -> 10^6.
//get => Bruteforce -> Better -> Best  || Think From Scratch
//------------------------------------------------------------------
//1. Largest Element
int arr[6] = {1, 2 , 3, 6, 0, 4, 8, 5, 9];
//Bruteforce -> sort -> O[NlogN]

//Best -> O[N]
/*
int largest = arr[0;
for(int i =0; i<6; i++){
  if(arr[i] > largest){
    largest = arr[i];
  }
}
cout << largest <<"\n;
  */
//--------------------------------------------------------------
//2. Second Largest
//Bruteforce -> sort and check by traversing that if it is no tequal to largest O[NlogN + N]
//Better -> O[2N] , find largest by O[n] -> again traverse to fing Slargest that is not equal to largest
//Best -> O[N] , As u update largest make the previous largest as Slargest and check if it arr[i] is greater than Slargest

//------------------------------------------------------------------------------------------------------------------------

//Remove duplicates in the array
//Bruteforce -> store in the set and return the size of set O[NlogN] and space complexity -> O[N]
//Best -> Two -pointer Approach
/*
 put i = 0; and check if(arr[i] != arr[j]) then arr[i+1] = arr[j] -> i++ ; j++
 return i+1
*/



  
