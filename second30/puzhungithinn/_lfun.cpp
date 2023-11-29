#include <iostream>
#include <vector>
#include <unordered_map>
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
	unordred_map<int,int> m;
	vector<int> runCnt;
	for(int i:v1){
		m[i]++;
		runCnt.push_back(m[i]);
	}
	
	return 0;
}
