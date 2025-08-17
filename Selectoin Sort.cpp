#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long  double
const int Mood=1e9+7;
using namespace std;
const double pi=acos(-1);
void SelectoinSort(vector<int>&arr,int n) {
	int Minm_Index=0;
	for(int i=0;i<n-1;i++) {
		Minm_Index=i;
		for(int j=i+1;j<n;j++) {
			if(arr[j]<arr[Minm_Index]) {
				Minm_Index=j;
				swap(arr[i],arr[Minm_Index]);
			}
		}
	}
}
int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	

	return 0;
}