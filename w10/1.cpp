#include <bits/stdc++.h>
using namespace std;
int main(){
	fstream text_file;
    text_file.open("text.txt", ios::in);
    
    string text_cin;
    getline(text_file,text_cin);
    string temp = "";
    
    string t_start,t_end;
    printf("�п�J�n�M�䪺��r\n> ");
    cin >> t_start >> t_end;
    cout << t_start << " �P " << t_end << " �����������r��\n";
    
    bool flag = false;
    
    for(int i=0;i<text_cin.size();i++){
    	if(text_cin[i]==' '){
    		if(temp!="")
    			if(temp!=","&&temp!="."){
    				if(flag){
    					cout << temp << " ";
    					if(temp==t_end){
    						flag = false;
    						break;
						}
					}
    				else{
    					if(temp==t_start){
							cout << temp << " ";
							flag = true;
						} 
					}
				}
			temp = "";
		}
		else
			temp += text_cin[i];
		if(i==text_cin.size()-1){
			if(temp!=","&&temp!="."){
				if(flag){
					cout << temp << " ";
					if(temp==t_end){
						flag = false;
						break;
					}
				}
				else{
					if(temp==t_start){
						cout << temp << " ";
						flag = true;
					} 
				}
			}
		}
	}
	return 0;
}

