#pragma warning(disable:4996)
// 수행 #5 문자열 길이 만들기 함수구현
// 학번 : 1208
// 이름 : 박세연 
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
	/*int count=0;
	while(1){
		if(myStr[count]==NULL){
			break;
		}
		else{
			count++;
		}
	}
	return count;*/
	
	/*int cnt=0;
	while(myStr[cnt]!=NULL) {
		cnt++;
	}
	return cnt;*/
	
	int cnt=0;
	for(int i=0;myStr[i] != NULL;i++) {
		cnt++;
	}
	return cnt;
}
