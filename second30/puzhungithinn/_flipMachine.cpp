#include <iostream>
#include <string>
using namespace std;
int main(){
	int f=0,cnt1=0,cnt2=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1') f=1;
		if(f)
			if(s[i]=='0') cnt1++;
	}
	f=0;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='0') f=1;
		if(f)
			if(s[i]=='1') cnt2++;
	}
	cout<<min(cnt1,cnt2)<<endl;
	return 0;
}
