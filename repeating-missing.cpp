#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long sum1=(n*(n+1))/2;
	long long sum2=(n*(n+1)*(2*n+1))/6;

	long long s1=0,s2=0;
	for(auto it:arr){
		s1+=it;
		s2+=(it*it);
	}
	// rep^2-mis^2= s2-sum2
	// rep-mis=s1-sum1;
	// rep+mis = s2-sum2/s1-sum1;

	long long val1 = (s2-sum2);
	long long val2 = (s1-sum1);
	val1 = val1/val2;
	long long rep = (val1+val2)/2;
	long long mis= rep - val2;

	return {(int)mis,(int)rep};
	
	
}
