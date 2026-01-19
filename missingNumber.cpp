#include <bits/stdc++.h>
using namespace std;
 
int main(void){
 
 long long  a,k,s;
 s=0;
cin>>a;
 
 
for(int i=1;i<=a-1;i++){
 
 
cin>>k;
s=s+k;
 
 
}
cout<<((1+a)*a)/2-s;
 
 
	return 0;
}