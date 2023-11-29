#include <iostream>
#include <vector>
#include <map>
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
	map<int,int> m1,m2;
	for(int i:v1)
		m1[i]++;
	int cntt=0;
	for(auto i:m1)
		cntt++;
	vector<int> cnts;
	for(auto i:m1)
		cnts.push_back(i.second);
	int x=0;
	for(auto i:m1){
		m2[i.first] = cnts[x];
		x++;
	}
	x=1;
	for(auto i:m2){
		sum+=(x*(i.first));
		x++;
		(i.second)--;
	}
	//cout<<endl<<sum<<endl;
	for(auto i:m2){
		for(int p=0;p<i.second;p++)
			sum+=((i.first)*cntt);
	}
	//cout<<cntt<<" "<<sum;
	for(auto i:m2)
		cout<<i.first<<" "<<i.second<<endl;
	return 0;
}
