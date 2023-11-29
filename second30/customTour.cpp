#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,m,s,e,sum=0;
	cin>>n>>m;
	vector<int> a(m),b(m),c(m);
	for(int i=0;i<m;i++)
		cin>>a[i]>>b[i]>>c[i];
	cin>>s>>e;
	for(int i=0;i<m;i++)
		sum+=c[i];
	cout<<sum;
	return 0;
}
