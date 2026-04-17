#include<bits/stdc++.h>
using namespace std;
int main(void){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
int a;
int x;
bool safe;
bool founded=false;
bool first=true;
cin>>a;

if(a==1){
	cout<<1<<'\n';
}
else if(a==2||a==3){
	cout<<"NO SOLUTION";
}
else{
	for(int i=2;i<=a;i+=2){
		cout<<i<<" ";
	}
	for(int i=1;i<=a;i+=2){
		cout<<i<<" ";
	}
}
cout<<'\n';
	return 0;
}