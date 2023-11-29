#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	string s,r;
	cin>>s;
	int isOddLen=0;
	if(s.length()%2!=0) isOddLen=1;
	map<char,int> m;
	for(char c:s)
		m[c]++;
	vector<char> v;
	for(auto i:m)
		if(i.second%2!=0) v.push_back(i.first);
	if(isOddLen) v.pop_back();
	int idx=0;
	for(char &c:s){
		if(c=='?'){
			c=v[idx];
			idx++;
			if(idx==v.size()) break;
		}
	}
	for(char &c:s)
		if(c=='?') c='a';
	sort(s.begin(),s.end());
	for(int i=0;i<s.length();i+=2)
		r.push_back(s[i]);
	for(int i=s.length()-2;i>0;i-=2)
		r.push_back(s[i]);
	cout<<r<<endl;
	for(int i=0;i<r.length()/2;i++)
		if(r[i]!=r[r.length()-1-i]){
			cout<<"-1\n"<<i<<" "<<r.length()-1-i;
			return 0;
		}
	//s=r;
	//sort(s.begin(),s.end(),greater<>());
	//if(s==r)
		cout<<r;
	//else cout<<"-1";
	return 0;
}
