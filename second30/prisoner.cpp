#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	int n,m,t;
	cin>>n>>m;
	vector<vector<int>> v(n);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>t;
			v[i].push_back(t);
		}
	map<int,int> m1,m2;
	for(auto i:v){
		m1[i[0]]++;
		m2[i[1]]++;
	}
	for(auto i:m1)
		if((i.second)%2==1){
			cout<<i.first<<endl;
			break;
		}
	for(auto i:m2)
		if((i.second)%2==1){
			cout<<i.first<<endl;
			break;
		}
	return 0;
}
