//Majority element (appars > n/2 time)
//BRUTEFORCE -> O[n^2]
//Better -> HASHINg O[2*N *logN] -> TC    || SC -> O[N]
//OPTIMAL -> MOORE's voting algorithm
Optimal Approach: Moore’s Voting Algorithm:
Intuition:

Approach: 
Initialize 2 variables:
Count –  for tracking the count of element
Element – for which element we are counting
Traverse through the given array.
// if question states otherwise we have to chek it

//link -> takeuforward.org/data-structure/find-the-majority-element-that-occurs-more-than-n-2-times/

//code
  int majorityElement(vector<int> v) {
	int ct = 0;
	int ele;
	for(int i =0; i<v.size(); i++){
		if(ct == 0){
			ct = 1;
			ele = v[i];
		}
		else if(v[i]== ele){
			ct++;
		}
		else if(v[i] != ele){
			ct--;
		}
	}

	//verification
	int cnt = 0;
	for(int i =0; i<v.size(); i++){
		if(v[i] == ele){
			cnt++;
		}
	}
	if(cnt > (v.size())/2){
		return ele;
	}
	else return -1;
}
TC -> O[N]
