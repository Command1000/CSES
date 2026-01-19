#include <bits/stdc++.h>
using namespace std;
 
int main(void){
 
 long long  a,k;
 a=1;
 k=1;
 string l;
 
 
cin>>l;
 
for(int i=0;i<=l.size()-1;i++){
 
if(l[i+1]==l[i]){
	a++;
}
else{
	a=1;
}
k=max(k,a);
 
 
}
 
cout<<k;
 
return 0;
 
 
 
}