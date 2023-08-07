#include <bits/stdc++.h>
using namespace std;
 int main(){
 	int n;cin>>n;
 	std::vector<int> v(n);
 	for(int i=0;i<n;++i){
 		cin>>v[i];
 	}
 	for(int i=0;i<n-1;++i){
 		for(int j=i+1;j<n;++j){
 			if(v[j]<v[i]){
 			int temp=v[i];
 			v[i]=v[j];
 			v[j]=temp;
 			}
 		}
 	}

for(int i=0;i<n;++i){
 		cout<<v[i]<<" ";
 	}

 	return 0;
 }
