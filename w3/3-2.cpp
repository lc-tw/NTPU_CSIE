#include <bits/stdc++.h>
using namespace std;

class Interest {
	private:
		double principal,rate,term;
	public:
		Interest();
		void set(double input_principal);
		void set(double input_principal,double input_term);
		double amount();
};

Interest::Interest(){
	principal = 100000;
	rate = 0.024;
	term = 12;
}

void Interest::set(double input_principal){
	principal = input_principal;
}

void Interest::set(double input_principal,double input_term){
	principal = input_principal;
	term = input_term;
}

double Interest::amount(){
	double num=principal;
	for(int i=0;i<term;i++) num*=(1+(rate/12));
	return num;
}

int main(){
	int customerA_p;
	int customerB_p,customerB_t;
	Interest a,b;
	cout << "customerA ��������\n";
	cin >> customerA_p;
	a.set(customerA_p);
	cout << "customerB �������B�s�ڴ��Ƭ�\n";
    cin >> customerB_p >> customerB_t;
    b.set(customerB_p,customerB_t);
    cout << "customerA �����Q�M:" << a.amount() <<endl;
    cout << "customerB �����Q�M:" << b.amount() <<endl;
	return 0;
}
