#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Check_sys() {
	int a = 1;
	//���� 1 ����С�ˣ����� 0 ���Ǵ��
	return *(char*)&a;
}
int main() {
	//�жϵ�ǰ�洢ģʽ�Ǵ�˻���С��
	int num = Check_sys();
	if (num == 1) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}