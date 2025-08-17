#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long  double
const int Mood=1e9+7;
using namespace std;
const double pi=acos(-1);
void InsertoinSort(vector<int>&arr,int n) {
	int key,j;
	for(int i=1;i<n;i++) {
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	

	return 0;
}