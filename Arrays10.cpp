//stl next_permutation(a.begin(), a.end());
// return a;

//Next permutation of the given array
//Optimal approach

1) longest prefix match
2) find a  number just greater than the a
3) place all other numbers in soted order

eg->
2 1 5 4 3 0 0
2 3 0 0 1 4 5   <- next greater permutation

2 1 5 4 3 0 0
    <--------> till here  no possible permutation bigger than this can be formed
  <-----------> took this since we have 5, 4, 3 greater than 1 so next greater permutation can be formed
putting just greter than 1 that is 3
then put all others in sorted order
2 3 0 0 1 4 5 <- ans

  //code
  vector<int> nextGreaterPermutation(vector<int> &A) {
    // 1 -> find the breakpoint
    // 2 -> find the element just greater then that breakpoint
    //3 -> put all other elements in sorted order
    int index = -1;
    int n = A.size();
    for(int i = n-1; i>=1; i--){
        if(A[i-1] < A[i]){
            index = i-1;
            break;
        }
    }

    if(index == -1){
        //5 4 3 2 1 => already last permutation
        reverse(A.begin(), A.end());
        return A;
    }
    else{
        for(int i = n-1; i>= index; i--){
            if(A[i] > A[index]){
                swap(A[i], A[index]);
                break;
            }
        }
        reverse(A.begin()+index+1 , A.end());
        return A;
    }
    
}
Tc -> O[3*N]
