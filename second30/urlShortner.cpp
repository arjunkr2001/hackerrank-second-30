#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
int main(){
	int m,n,q;
	cin>>m>>n;
	vector<int> id(n);
	vector<string> shrt(n);
	vector<string> actual(n);
	for(int i=0;i<n;i++)
		cin>>id[i]>>shrt[i]>>actual[i];
	cin>>q;
	vector<string> r(q);
	for(int i=0;i<q;i++)
		cin>>r[i];
	unordered_map<int,int> usrCnt;
	unordered_map<string,string> url;
	unordered_map<string,int> url_usr;
	for(int i=0;i<n;i++){
		url[shrt[i]] = actual[i];
		url_usr[shrt[i]] = id[i];
	}
	for(auto i:r){
		usrCnt[url_usr[i]]++;
		cout<<url[i]<<" "<<usrCnt[url_usr[i]]<<endl;
	}
	return 0;
}
