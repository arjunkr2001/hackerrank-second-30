#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n,l,r,j;
	cin>>n;
	vector<int> a(n),b,diff;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>l>>r;
	diff.push_back(l-a[0]);
	b.push_back(l);
	j=l;
	for(int i=1;i<n;i++){
		while(j-a[i]<=diff[i-1])
			j++;
		diff.push_back(j-a[i]);
		b.push_back(j);
	}
	if(b.back()>r) cout<<"-1";
	else for(int i:b) cout<<i<<" ";
	return 0;
}
