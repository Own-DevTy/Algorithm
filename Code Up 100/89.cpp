#include<iostream>

int main(){
	int a, d, n, count = 0;
	scanf("%d %d %d", &a, &d, &n);
	
	for(int i = a; ; i += d){
		count++;
		if(count == n){
			printf("%d", i);
			break;
		}	
	}
	return 0;
}
