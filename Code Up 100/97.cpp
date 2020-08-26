#include<iostream>
int main(){
	int map[20][20] = { 0, };
	for(int x = 1; x < 20; x++) for(int y = 1; y < 20; y++) scanf("%1d", &map[x][y]);
	
	int n, x, y;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		for(int mx = 1; mx < 20; mx++){
			for(int my = 1; my < 20; my++){
				if(x == mx && y == my)
					continue;
				if(x == mx)
					map[x][my] = !map[x][my];
				if(y == my)
					map[mx][y] = !map[mx][y];
			}
		}
		
	}
	
	for(int x = 1; x < 20; x++){
		for(int y = 1; y < 20; y++) printf("%d ", map[x][y]);
		printf("\n");
	}
	
	
	return 0;
}
