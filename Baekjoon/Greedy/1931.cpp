#include<iostream>
#include<algorithm>

using namespace std;

class Conference{
public:
	Conference() = default;
	Conference(int start, int end){
		this->start = start;
		this->end = end;
	}
	
	const bool operator<(Conference & conference) const{
		if(this->end == conference.getEnd())
			return this->start < conference.getStart();
		return this->end < conference.getEnd();
	}
	const int & getStart(){
		return this->start;
	}
	const int & getEnd(){
		return this->end;
	}
private:
	int start;
	int end;
	
};

int main(){
	int N, start, end, nextStart = 0, count = 0;
	scanf("%d", &N);
	
	Conference conf[N];
	for(int i = 0; i < N; i++){
		scanf("%d %d", &start, &end);
		conf[i] = Conference(start, end);
	}
	
	sort(conf, conf+N);
	
	for(int i = 0; i < N; i++){
		if(nextStart <= conf[i].getStart()){
			nextStart = conf[i].getEnd();
			count++;
		}
	}
	
	printf("%d", count);
	return 0;
}
