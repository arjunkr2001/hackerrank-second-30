#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n1,n2,sum=0;
	cin>>n1;
	vector<int> v1(n1);
	for(int i=0;i<n1;i++)
		cin>>v1[i];
	cin>>n2;
	vector<int> v2(n2);
	for(int i=0;i<n2;i++)
		cin>>v2[i];
	map<int,multiset<int>> m;
	int x=0;
	for(int i:v1){
		m[i].insert(v2[x]);
		x++;
	}
	//for(auto i:m){
	//	cout<<i.first<<" : ";
	//	for(int j:i.second) cout<<j<<" ";
	//	cout<<endl;
	//}
	vector<int> fidx;
	int j;
	x = 0;
	for(auto i:m) x++ ;
	for(auto i:m){
		//fidx.push_back(i.second[0]);
		j=0;
		auto it = i.second.begin();
		int si = i.second.size();
		for( int i = 0; i < si; i++ ){//cout<<(*it)<<" ";
			if(i==0){ fidx.push_back(*it);}
			else{
				sum+=((*it)*(x));
			}
			it++;
		}
	}
	sort(fidx.begin(),fidx.end());
	//for(int i:fidx) cout<<i<<" ";
	for(int i=1;i<=x;i++){
		//cout<<x<<endl;
		sum+=((i)*(fidx[x-1]));
		//x++;
	}
	cout<<sum;
	return 0;
}
