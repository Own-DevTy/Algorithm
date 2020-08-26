#include<iostream>

int main(){
	char c;
	scanf("%c", &c);
	for(int i = 'a'; i < c + 1; i++) printf("%c ", i);
	return 0;
}
