#include<iostream>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	std::sort(arr, arr + n);
	
	printf("%d", arr[0]);
	
	return 0;
}
