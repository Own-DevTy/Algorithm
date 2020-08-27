#include<iostream>

using namespace std;

int main(){
	int money = 1000, price, count = 0;
	int coin[6] = {500, 100, 50, 10, 5, 1};
	
	cin >> price;
	money -= price;
	for(int i = 0; i < 6; i++)
		while(money >= coin[i]){
			count += money / coin[i];
			money %= coin[i];
		}
	
	cout << count;	
	
	return 0;
}
