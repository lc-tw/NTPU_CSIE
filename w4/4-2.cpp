#include <bits/stdc++.h>
#include "Time.cpp"
using namespace std;
int main(){
	TIME clock;
	printf("��l�ɶ��G");
	clock.showTime();
	printf("\n�г]�w�ɶ��G\n");
	int h,m,s;
    while(cin >> h >> m >> s){
    	if(clock.setTime(h,m,s)){
    		printf("�]�w���ɶ����G");
    		clock.showTime();
		}
		else
			printf("���~�I�]�w���ɶ����~");
		printf("\n�г]�w�ɶ��G\n");
	}
	return 0;
}

