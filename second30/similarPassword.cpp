#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	map<char,int> m={{'v',0},{'c',0}};
	for(char i:s)
		if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u') m['v']++;
		else m['c']++;
	if(m['v']==m['c']){
		cout<<"0";
		return 0;
	}
	if(m['v']>m['c']){
		cout<<(m['v']-m['c'])/2;
		return 0;
	}
	int ub = (m['c']-m['v'])/2;
	int x=0,cnt=0;
	sort(s.begin(),s.end());
	for(char i:s){
		if(x==ub) break;
		if(i=='b'||i=='d'||i=='f'||i=='h'||i=='j'||i=='n'||i=='p'||i=='t'||i=='v'){
			cnt+=1;
			x++;
		}
		else if(i=='c'||i=='g'||i=='k'||i=='m'||i=='q'||i=='s'||i=='w'){
			cnt+=2;
			x++;
		}
		else if(i=='l'||i=='r'||i=='x'){
			cnt+=3;
			x++;
		}
		else if(i=='y'){
			cnt+=4;
			x++;
		}
		else if(i=='z'){
			cnt+=5;
			x++;
		}
	}
	cout<<cnt;
	return 0;
}
