//Rotate array by K places
//-----------------------------------------
//BRUTEFORCE
/*
Left Rotation
store arr[0] in some variable taking O[1]
then arr[i] = arr[i+1];
if(i == n-1) arr[i] = temp;
=> put in loop of (K % size);

*/

// TC -> O[k*N] || SC -> O[1}

/*
Right Rotation
store arr[n-1] in some variable taking O[1]
then arr[i] = arr[i-1];
if(i == 0) arr[i] = temp;
=> put in loop of (K % size);
*/
//----------------------------------------
//BETTER

/*
Store the elements in temp array 
Appay maths to put elements in the array
arr[i-d] = arr[i]
O[n+d] 
*/

//---------------------------------------------

//OPTIMAL
/*
1 2 4 5 3 6 7 and d = 4;

reverse(a, a+d);   => 5 4 2 1
reverse(a+d, a+n);  => 7 6 3
reverse(a, a+n);    => 7 6 3 1 2 4 5
TC -> O[N]
*/

