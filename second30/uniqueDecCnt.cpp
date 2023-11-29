#include <iostream>
#include <string>
#include <set>
#include <cmath>
using namespace std;
set<int> se;
int binToDec(string s){
	int d=0,p=1;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1') d+=p;
		p*=2;
	}
	return d;
}
void subSeq(string s){
	int l = s.length(),bin;
	long z = pow(2,l);
	string st;
	for(long i=1;i<z;i++){
		bin=i;
		for(int j=0;j<l;j++){
			if(bin&1 << j){
				st.push_back(s[j]);
			}
		}
		se.insert(binToDec(st));
		st.clear();
	}
}
int main(){
	string s,o="";
	cin>>s;
	subSeq(s);
	cout<<se.size();
	return 0;
}
