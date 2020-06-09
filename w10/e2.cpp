#include<bits/stdc++.h>

using namespace std;

class UserData{
private:
    int ID;        //�s��
    char Name[10]; //�m�W
    double Height; //����
    double Weight; //�魫
public:
    UserData(int =-1,string ="",double =-1,double =-1);
    void setID(int);
    int getID();
    void setName(string);
    void setHeight(double);
    void setWeight(double);
};

UserData::UserData(int i,string n,double h,double w){
    setID(i);
    setName(n);
    setHeight(h);
    setWeight(w);
}

void UserData::setID(int a){
    ID=a;
}

void UserData::setName(string s){
    int l=s.size();
    l=(l<10?l:9);
    s.copy(Name,l);
    Name[l]='\0';
}

void UserData::setHeight(double a){
    Height=a;
}

void UserData::setWeight(double a){
    Weight=a;
}

int main(){
    ofstream output("data.dat",ios::out|ios::binary);
    if(!output){
        cout<<"Fail to open data.dat"<<endl;
        exit(-1);
    }

    //��l��
    UserData blank;
    for(int i=0;i<10;i++)
        output.write(reinterpret_cast<const char*>(&blank),sizeof(UserData));

    //��J
    UserData UD;
    int id;
    string s;
    double h,w;
    while(cout<<"�п�JUser ID(1~10)"<<endl){
        cin>>id;
        if(id==0) break;
        cout<<"�п�JUser Name�BHeight�BWeight"<<endl;
        cin>>s>>h>>w;
        UD.setID(id);
        UD.setName(s);
        UD.setHeight(h);
        UD.setWeight(w);
        output.seekp((id-1)*sizeof(UserData));
        output.write(reinterpret_cast<const char*>(&UD),sizeof(UserData));
    }
    cout<<"��J����,�w�إ�data.dat"<<endl;
    return 0;
}
