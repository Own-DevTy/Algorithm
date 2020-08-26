#include<iostream>
int main(){
	int h, w, n, l, d, x, y;
	scanf("%d %d", &h, &w);
	
	int map[h + 1][w + 1] = { 0, };
	
	scanf("%d", &n);
	for(int c = 0; c < n; c++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
		for(int i = 0; i < l; i++) if(d) map[x+i][y] = 1; else map[x][y+i] = 1;
	}
	
	for(int x = 1; x < h + 1; x++){
		for(int y = 1; y < w + 1; y++) printf("%d ", map[x][y]);
		printf("\n");
	}
	return 0;
}
