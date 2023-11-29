#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int cnt=0,st=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1') cnt++;
		if(s[i]=='0'&&cnt>0){
			st++;
			cnt--;
		}
	}
	cout<<st;
	return 0;
}
