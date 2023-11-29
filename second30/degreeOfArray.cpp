#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>
using namespace std;
vector<int> v2;
int findDeg(vector<int> v){
	unordered_map<int,int> m;
	for(int i:v)
		m[i]++;
	int deg = 0;
	for(auto i:m)
		if(i.second>deg) deg = i.second;
	for(auto i:m)
		if(i.second==deg) v2.push_back(i.first);
	return deg;
}
int main(){
	int n, r = INT_MAX,a,b;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int d = findDeg(v);
	if(d==1){
		cout<<1;
		return 0;
	}
	for(int i:v2){
		for(int j=0;;j++)
			if(v[j]==i){
				a=j;
				break;
			}
		for(int j=n-1;j>a;j--)
			if(v[j]==i){
				b=j;
				break;
			}
		r = min(r,b-a);
	}
	cout<<r+1;
	return 0;
}
