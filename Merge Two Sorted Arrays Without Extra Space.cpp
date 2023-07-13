#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int m=a.size();
	int n=b.size();
	a.resize(m+n);

	for(int i=0;i<n;i++)
	{
		a[m+i]=b[i];
	}
	sort(a.begin(),a.end());
	b.clear();
	
}
