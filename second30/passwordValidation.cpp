#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	vector<string> pswd(n);
	for(int i=0;i<n;i++)
		cin>>pswd[i];
	cin>>k;
	unordered_map<string,int> m;
	for(auto i:pswd){
		m[i]++;
		if(m[i]>k) cout<<"REJECT\n";
		else cout<<"ACCEPT\n";
	}
	return 0;
}
