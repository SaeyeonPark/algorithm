#pragma warning(disable:4996)
// ���� #5 ���ڿ� ���� ����� �Լ�����
// �й� : 1208
// �̸� : �ڼ��� 
#include <stdio.h>
// �Լ� ���� �κ�
int GetLength(char* myStr);
int main()
{
	char buf[1000] = { 0 };
	printf("���ڿ� �Է� : ");
	gets(buf); // ������ ���ڿ��� �Է� 
	int length = GetLength(buf); // �Լ� ȣ��
	printf("\n%s ", buf);
	printf("���ڿ� ���̴� %d �Դϴ�.\n", length);
	return 0;
}
// �Լ� ���Ǻκ�
int GetLength(char* myStr)
{
	// �ۼ����ּ���~!
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
