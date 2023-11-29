#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
	int n,mindif = INT_MAX;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	for(auto it=v.begin();it<v.end()-1;it++)
		if((*(it+1)-(*it)) < mindif)
			mindif=(*(it+1)-(*it));
	for(auto it=v.begin();it<v.end()-1;it++)
		if((*(it+1)-(*it)) == mindif)
			cout<<(*it)<<" "<<(*(it+1))<<endl;
	return 0;
}
