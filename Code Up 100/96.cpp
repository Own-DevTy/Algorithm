#include<iostream>
int main(){
	int map[20][20] = { 0, };
	int n, x, y;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		map[x][y] = 1;	
	}
	
	for(int x = 1; x < 20; x++){
		for(int y = 1; y < 20; y++) printf("%d ", map[x][y]);
		printf("\n");
	}
	
	
	return 0;
}
