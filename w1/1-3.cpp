#include <bits/stdc++.h>
using namespace std;
int main(){
	long long num;
	int after,temp,now=0,out[666];
	cout << "��J�Ʀr(�Q�i��):";
	cin >> num;
	cout << "��J����i��:";
	cin >> after;
	while(num!=0){
		temp = num % after;
		num = num / after;
		now++;
		out[now] = temp;
	}
	for(int i=now;i>=1;i--){
		if(out[i]>=10) cout<<(char)(out[i]+55);
		else cout<<out[i];
	}
 
	return 0;
}
