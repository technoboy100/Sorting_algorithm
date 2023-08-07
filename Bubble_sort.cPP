#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;++i){
			if(v[i]>v[i+1]){
				int temp=v[i];
				v[i]=v[i+1];
				v[i+1]=temp;
			}
		}
		counter++;
	}
	for(int i=0;i<n;++i){
		cout<<v[i]<<" ";
	}
return 0;
}