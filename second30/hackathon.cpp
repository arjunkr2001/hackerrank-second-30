#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
long long int nOfElG(long long int x,vector<long long> v){
	int cnt=0;
	for(int i:v)
		if(i>x) cnt++;
	return cnt;
}
int main(){
	long long n,k;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
		cin>>v[i];
	cin>>k;
	unordered_map<long long,long long> m;
	for(long long i:v)
		m[i]++;
	sort(v.begin(),v.end());
	unordered_map<long long,long long> m2;
	long long p=1;
	for(auto i:m){
		m2[i.first] = (i.second)+min(k,nOfElG(i.first,v));
		p++;
	}
	int max=-999;
	for(auto i:m2)
		if(i.second>max) max=i.second;
	cout<<max;
	return 0;
}
