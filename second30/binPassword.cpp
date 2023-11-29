#include <iostream>
#include <string>
using namespace std;
int main(){
	string s,t,r;
	cin>>s>>t;
	int c0=0,c1=0;
	for(char i:t)
		if(i=='0') c0++;
		else c1++;
	for(int i=0;i<s.length();i++){
		if(c0==0 || c1==0) break;
		if(s[i]=='0'){
			r.push_back('1');
			c1--;
		}
		else{
			r.push_back('0');
			c0--;
		}
	}
	for(int i=0;i<c0;i++) r.push_back('0');
	for(int i=0;i<c1;i++) r.push_back('1');
	t="";
	for(int i=0;i<s.length();i++)
		if(s[i]==r[i]) t.push_back('0');
		else t.push_back('1');
	cout<<t;
	return 0;
}
