#include <bits/stdc++.h>
using namespace std;

class rectangle {
	private:
		double length,width,height;
	public:
		rectangle(double x,double y,double z);
		double volume();
};

rectangle::rectangle(double x,double y,double z){
	length = x;
	width = y;
	height = z;
	cout << "������:" <<endl;
	cout << "�� = " << length <<endl;
	cout << "�e = " << width <<endl;
	cout << "�� = " << height <<endl;
}

double rectangle::volume(){
	return length*width*height;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    rectangle a(6.2, 8.4, 10.2);
    cout << "��n = " << a.volume() <<endl;
	return 0;
}
