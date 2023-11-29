#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	string s,r;
	cin>>s;
	int len = s.length();
	int haf = len/2;
	//for(int i=0;i<len;i++){
	//	if(s[i]=='?'){
	//		if(s[len-1-i]!='?') s[i]=s[len-1-i];
	//		else s[i] = 'a';
	//	}
	//}
	for(int i=0;i<len;i++)
		if(s[i]=='?') s[i]='a';
	sort(s.begin(),s.end());
	char y = s.back(); //cout<<y<<endl;
	map<char,int> m;
	for(char c:s)
		m[c]++;
	//int y=0,mapSize=m.size();
	int k=0;
	for(auto i:m){
		if(i.first == y) break;
		if((i.second)%2!=0){
			s[k]=i.first;
		}
		k++;
	}
	//cout<<s<<endl;
	sort(s.begin(),s.end());
	//cout<<s<<endl;
	for(int i=0;i<len;i+=2)
		r.push_back(s[i]);
	//cout<<r<<endl;
	for(int i=len-2;i>0;i-=2)
		r.push_back(s[i]);
	cout<<r<<endl;
	for(int i=0;i<len/2;i++){
		if(r[i]!=r[len-1-i]){
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<r<<endl;
	return 0;
}
