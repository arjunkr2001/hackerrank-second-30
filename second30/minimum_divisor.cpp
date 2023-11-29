#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	long long n,t,sum=0,mid,max,min=1,r;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
		cin>>v[i];
	cin>>t;
	sort(v.begin(),v.end());
	max = v[n-1];
	while(min<=max){
		mid = (max+min)/2;
		for(long long x:v)
			sum+=ceil(((double)x/(double)mid));
		if(sum<=t){
			r=mid;
			max=mid-1;
		}
		else min=mid+1;
		sum=0;
	}
	cout<<r;
	return 0;
}
