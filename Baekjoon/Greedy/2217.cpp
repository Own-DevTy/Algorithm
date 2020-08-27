#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int K;
	cin >> K;
	
	int rope[K], max = 0;
	for(int i = 0; i < K; i++) cin >> rope[i];
	
	sort(rope, rope + K, [](int a, int b)->int{return a > b;});
	
	for(int i = 0; i < K; i++){
		if(rope[i] * (i + 1) > max){
			max = rope[i] * (i + 1);
		}
	}
	
	cout << max;
	return 0;
}
