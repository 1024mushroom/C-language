#include<stdio.h>
int main(){
	char password[20];
	int ch;
	printf("���������룺\n");
	scanf("%s",&password);
	while((ch=getchar())!='\n'){
		;
	}
	printf("��ȷ�����룺(Y/N)\n");
	ch=getchar();
	if(ch=='Y'||ch=='y'){
		printf("ȷ�ϳɹ���\n");
	}else{
		printf("ȷ��ʧ��\n");
	}
	return 0;
	
}
