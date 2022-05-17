/*#include<stdio.h>

int main() {*/ //배열 
	
	/*int a[5],i; //화요일 방과후  소스3 
	for(i=0;i<5;i++) {
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++) {
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;*/
	
	/*char str[26],i;
	for(i=0;i<26;i++){
		str[i]='A'+i;
	}
	for(i=25;i>=0;i--) {
		printf("%c",str[i]);
	}
	printf("\n");
	
	return 0;*/
	
	/*int num[100],i,cnt;
	
	for(i=0;i<100;i++) {
		scanf("%d",&num[i]);
		if(num[i]==0) {
			break;
		}
	}
	cnt=i;
	for(i=1;i<cnt;i+=2) {
		printf("%d ",num[i]);
	}
	printf("\n");*/
	
	/*int num[100],i;
	for(i=0;i<100;i++) {
		scanf("%d",&num[i]);
		if(num[i]==0){ //0이 입력되면 멈춤 
			break;
		}
	}
	for(i=i-1;i>=0;i--) {
		printf("%d ",num[i]);
	}*/
	
	/*int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year,mon;
	
	while(1) {
		printf("YEAR = ");
		scanf("%d",&year);
		printf("MONTH = ");
		scanf("%d",&mon);
		
		if(mon==0) {
			break;
		}
		else if (mon<=0 || mon>12){
			printf("잘못 입력하셨습니다.\n\n");
		}
		else {
			if(year%400==0) days[2] =29;
			else if(year%4==0&&year%100!=0) days[2]=29;
			else days[2]=28;
			printf("입력하신 달의 수는 %d입니다.\n\n",days[mon]);
		}
	}
	return 0;*/
	
	/*int num[10]; //가장 큰 수 출력 
	int max=0;
	int i;
	
	for(i=0;i<10;i++) {
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++) {
		if(max<num[i]) {
			max=num[i];
		}
	}
	printf("%d\n",max);
	
	return 0;*/
	
	/*int num[10]; //가장 큰 값과 홀수 중 가장 작은 값 출력
	int max=-10000,min=10000;
	int i;
	
	for(i=0;i<10;i++) {
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++){
		if(num[i]%2==0) {
			if(max<num[i]) {
				max=num[i];
			}
		}
		else{
			if(min>num[i]) {
				min=num[i];
			}
		}
	}
	printf("%d %d\n",min,max);
	return 0;*/
	
	/*int num[10];
	int i;
	int max=0;
	int min=10001;
	
	for(i=0;i<10;i++) {
		scanf("%d",&num[i]);
		if((100>num[i])&&(max<num[i])){
			max=num[i];
		} 
		if((100<num[i])&&(min>num[i])){
			min=num[i];
		}
	}
	printf("%3d %3d\n",max, min);*/
	
#pragma warning(disable:4996)
// 수행 #5 문자열 길이 만들기 함수구현
// 학번 :
// 이름 :
#include <stdio.h>
// 함수 선언 부분
int GetLength(char* myStr);
int main()
{
char buf[1000] = { 0 };
printf("문자열 입력 : ");
gets(buf); // 임의의 문자열을 입력
int length = GetLength(buf); // 함수 호출
printf("\n%s ", buf);
printf("문자열 길이는 %d 입니다.\n", length);
return 0;
}
// 함수 정의부분
int GetLength(char* myStr)
{
// 작성해주세요~!
}
