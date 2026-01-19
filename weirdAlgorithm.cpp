#include <bits/stdc++.h>
using namespace std;
 
int main(void){
 
 long long  a;
 
cin>>a;
while(true){
cout<<a<<" ";
	if(a==1){
	break;
}
 
 
 
if(a%2==0){
	a/=2;
}
else if(a%2!=0){
	a=a*3+1;
}
 
}
 
	return 0;
}
