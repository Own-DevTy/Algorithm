#include<iostream>

int map[11][11];
int delta[2][2] = {{0, 1}, {1, 0}};
int flag = false;

int check(int y, int x){
	if(map[y][x] == 1) return false;
	return true;
}

void dfs(int y, int x){
	if(flag) return;
	if(map[y][x] == 2 || (y == 9 && x == 9)){
		map[y][x] = 9;
		flag = true;
		return;
	}
	map[y][x] = 9;
	for(int i = 0; i < 2; i++)
		if(check(y + delta[i][0], x + delta[i][1]))
			dfs(y + delta[i][0], x + delta[i][1]);
}

int main(){
	
	for(int y = 1; y < 11; y++) for(int x = 1; x < 11; x++) scanf("%1d", &map[y][x]);

	dfs(2, 2);
	
	for(int y = 1; y < 11; y++){ for(int x = 1; x < 11; x++) printf("%d ", map[y][x]); printf("\n");}
	return 0;
}
