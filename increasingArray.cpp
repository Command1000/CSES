#include <bits/stdc++.h>
using namespace std;
 
 
int main(void){
 
 
 
int n;
long long d=0;
cin>>n;
int array[n];
 
for(int h=0;h<=n-1;h++){
	cin>>array[h];
}
for(int i=0;i<n-1;i++){
	if(array[i+1]<array[i]){
d=d+array[i]-array[i+1];
array[i+1]+=array[i]-array[i+1];
}
}
 
 
cout<<d;
 
	return 0;
}
