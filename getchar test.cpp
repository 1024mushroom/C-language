#include<stdio.h>
int main(){
	char password[20];
	int ch;
	printf("请输入密码：\n");
	scanf("%s",&password);
	while((ch=getchar())!='\n'){
		;
	}
	printf("请确认密码：(Y/N)\n");
	ch=getchar();
	if(ch=='Y'||ch=='y'){
		printf("确认成功！\n");
	}else{
		printf("确认失败\n");
	}
	return 0;
	
}
