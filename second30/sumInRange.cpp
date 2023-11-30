#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	long long n,l,r,cnt=0;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
		cin>>v[i];
	cin>>l>>r;
	sort(v.begin(),v.end());
	for(long long i=0;i<n-1;i++)
		for(long long j=i+1;j<n;j++)
			if((v[i]+v[j])>=l && (v[i]+v[j])<=r) cnt++;
			else if((v[i]+v[j])>r) break;
	cout<<cnt;
	return 0;
}
