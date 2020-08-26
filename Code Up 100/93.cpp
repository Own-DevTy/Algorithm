#include<iostream>

int main(){
	int n, dp[24] = { 0, };
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		dp[arr[i]]++;
	}
	
	for(int i = 1; i <= 23; i++) printf("%d ", dp[i]);
	
	return 0;
}
