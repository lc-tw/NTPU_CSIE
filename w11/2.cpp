#include <bits/stdc++.h>
using namespace std;

class Pizza;
bool compare(Pizza&, int);
void set_cake_crust(Pizza&, int);
void set_size(Pizza&, int);
bool set_ingredients(Pizza&, int);
void show_pizza(Pizza&, int);
string ingredients_name[9] = {
	"���",   "�ɦ�", "�_�q",
	"�ɦױ�", "�f�X", "�C��",
	"þ��",   "���L", "����"
};

class Pizza{
	public:
		Pizza(int input_cake_crust){
			cake_crust = input_cake_crust;
		};
		friend bool compare(Pizza&, int);
		friend void set_cake_crust(Pizza&, int);
		friend void set_size(Pizza&, int);
		friend bool set_ingredients(Pizza&, int);
		friend void show_pizza(Pizza&, int);
		int get_cake_crust(){
			return cake_crust;
		};
		int get_size(){
			return size;
		};
		int get_ingredients(int n){
			if(n>=0&&n<=8)
				return ingredients[n];
			return -1;
		};
	private:
		int cake_crust;
		int size;
		int ingredients[9] = {0};
};

bool compare(Pizza& the_pizza, int ingredients){
	if(the_pizza.ingredients[ingredients-1]==0)
		return true;
	else return false;
}

void set_cake_crust(Pizza& the_pizza, int cake_crust){
	the_pizza.cake_crust = cake_crust;
}

void set_size(Pizza& the_pizza, int size){
	the_pizza.size = size;
}

bool set_ingredients(Pizza& the_pizza, int ingredients){
	if(compare(the_pizza, ingredients)){
		the_pizza.ingredients[ingredients-1] = 1;
	}
	else printf("�o�Ӱt�ƿ�L�F�A�Э��s���!\n");
}

void show_pizza(Pizza& the_pizza){
	printf("�A�� Pizza :\n");
	int prize = 0;
	printf("���: ");
	if(the_pizza.get_cake_crust() == 1) printf("�ۤ�\n");
	else if(the_pizza.get_cake_crust() == 2) printf("����\n");
	else if(the_pizza.get_cake_crust() == 3) printf("�P�p\n");
	printf("�j�p: ");
	if(the_pizza.get_size() == 1){
		prize += 300;
		printf("�p\n");
	} 
	else if(the_pizza.get_size() == 2){
		prize += 420;
		printf("��\n");
	}
	else if(the_pizza.get_size() == 3){
		prize += 510;
		printf("�j\n");
	}
	printf("�t��: ");
	int ingredients_flag = 0;
	for(int i=0;i<9;i++){
		if(the_pizza.get_ingredients(i) == 1){
			prize += 30;
			if(ingredients_flag==0)
				cout << ingredients_name[i];
			else
				cout << " & " << ingredients_name[i];
			ingredients_flag++;
		}
	}
	printf("\n\n�A�� Pizza ����: $%d\n���´f�U!!\n", prize);
}

int main(){
	printf("��� Pizza ���:\n");
    printf("1. �ۤ�\n");
    printf("2. ����\n");
    printf("3. �P�p\n");
    bool input_flag = true;
    int input;
	while(input_flag){
    	printf("> ");
    	cin >> input;
    	if(input>=1&&input<=3)
    		input_flag = false;
    	else printf("��J���~�A�Э��s��J!\n");
	}
	Pizza a_pizza(input);
	
	printf("��� Pizza �j�p:\n");
    printf("1. �p\n");
    printf("2. ��\n");
    printf("3. �j\n");
    input_flag = true;
	while(input_flag){
    	printf("> ");
    	cin >> input;
    	if(input>=1&&input<=3)
    		input_flag = false;
    	else printf("��J���~�A�Э��s��J!\n");
	}
	set_size(a_pizza,input);
	
	printf("��� Pizza �t��:\n");
	for(int i=0;i<9;i++){
		printf("%d. ",i+1);
		cout << ingredients_name[i] <<endl;
	}
	input_flag = true;
	while(input_flag){
    	printf("> ");
    	cin >> input;
    	if(input>=0&&input<=9){
    		if(input==0) input_flag = false;
    		else set_ingredients(a_pizza,input);
		}
    	else printf("��J���~�A�Э��s��J!\n");
	}
	
	show_pizza(a_pizza);
	return 0;
}

