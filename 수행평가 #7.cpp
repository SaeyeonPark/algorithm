#pragma warning(disable:4996)
// ���� #7 ȸ�������� �Է¹ް� ����ϱ�
// �й� : 1208
// �̸� : �ڼ���
#include<stdio.h>
typedef struct cake {
	char name[35];
	int age;
}user;

void getUserInfo(user*,int i);
void printUserInfo(user*,int i);

int main() {
	int i=0;
	user list[100] = {0};
	printf("ȸ�� �� : ");
	scanf("%d",&i);
	printf("%d���� ȸ�� ���� �Է� : \n",i);
	
	for(int j=0;j<i;j++) getUserInfo(list,j+1);
	printf("\n%d���� ���� ���\n",i);
	for(int j=0;j<i;j++) printUserInfo(list,j+1);
	return 0;
}
void getUserInfo(user* list,int i); {
	printf("%d : ",i);
	scanf("%d%s",&list[i].age,list[i].name);
}

void printUserInfo(user* list,int i) {
	printf("%d : %d %s\n",i,list[i].age,list[i].name);
}
