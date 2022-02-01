#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; ++i){
		cin>>arr[i];
	}

	for(int i=1; i<size; ++i){
		int j = i;
		while(j > 0 && arr[j] < arr[j-1]){
			swap(arr[j], arr[j-1]);
			j--;
		}
	}

	for(int i=0; i<size; ++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}