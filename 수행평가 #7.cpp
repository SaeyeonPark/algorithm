#pragma warning(disable:4996)
// 수행 #7 회원정보를 입력받고 출력하기
// 학번 : 1208
// 이름 : 박세연
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
	printf("회원 수 : ");
	scanf("%d",&i);
	printf("%d명의 회원 정보 입력 : \n",i);
	
	for(int j=0;j<i;j++) getUserInfo(list,j+1);
	printf("\n%d명의 정보 출력\n",i);
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
