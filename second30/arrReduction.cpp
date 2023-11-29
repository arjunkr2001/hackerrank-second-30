#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	long long n,cost;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	long long min=v[0];
	long long max=v.back();
	cost=ceil((double)(min+max)/(double)(max-min+1));
	for(long long i=1;i<v.size()-1;i++){
		min=v[i];
		max=min+max;
		cost+=ceil((double)(min+max)/(double)(max-min+1));
	}
	cout<<cost;
	return 0;
}
