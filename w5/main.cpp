#include "Node.cpp"
#include "BiTree.cpp"

int main() {
	BiTree tree;
	while(true){
		printf("�п�ܦ�ʶ���\n");
		printf("1.�s�W�`�I ");
		printf("2:�C�L�ثe���`�I(inorder) ");
		printf("3:�C�L�̤p��node ");
		printf("4:�C�L�̤j��node ");
		printf("0:�����{��\n> ");
		int mode;
		cin >> mode;
		if(mode>=0&&mode<=4){
			if(mode==1){
				bool mode_1_flag = false;
				while(!mode_1_flag){
					printf("�п�J�n�s�W���`�I(1~100)\n> ");
					int insert_num;
					cin >> insert_num;
					if(insert_num>=1&&insert_num<=100){
						mode_1_flag = true;
						tree.Insert(insert_num); 
					}
					else
						printf("Error! �п�J���T���d��");
				}
			}
			else if(mode==2) tree.Print();
			else if(mode==3) tree.Print_Min();
			else if(mode==4) tree.Print_Max();
			else return 0;
		}
		else printf("Error! ��ܪ����ؤ��X�k\n");
	}
	return 0;
}
