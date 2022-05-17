#include <stdio.h>
#include<math.h> 
#include<string.h>
#include<time.h> 
#include<conioh>
#include<windowsh>
#include<stdlib.h>

/*typedef struct point {
	int xpos;
	int ypos;
}point;

typedef struct rectangle{
	point one;
	point two;
}rectangle;

void showrecarea(rectangle rect); //넓이
void showrecpos(rectangle rect); //4개 점좌표 출력*/

/*typedef struct point {
	int xpos;
	int ypos;
} point;*/

/*typedef struct circle {
	double radius;
	point* center;
} circle;*/

//point Add(point po1, point po2);

//point pos={30,40};
//point* ptr=&pos;

/*typedef struct person {
	int age;
	char name[101];
	int join;
} person;*/

//person arr[100001];

/*typedef struct point {
	char name[20];
	char phoneNum[20];
	int age;
} person;*/

//point swappoint(point,point);

/*void pizza(int a) { 
	//정올 함수 1 자가진단 3 
	int i=0,j=0,k=1;
	
	for(i=1;i<=a;i++) {
		for(j=1;j<=a;j++) {
			printf("%d ",k++);
		}
		printf("\n");
	}
}*/

/*void max(int a,int b,int c)
{
	int n=0;
	if(a>=b&&a>=c) n=a;
	else if(b>=a&&b>=c) n=b;
	else n=c;
	printf("%d",n);
}*/

/*int milk(int a,int b) {
	//정올 자가진단 5 
	int pos=1,i=0;
	
	for(i=0;i<b;i++) {
		pos=pos*a;
	}
	return pos;
}*/

/*int gesan(int x,int y,char op) {
	//사칙연산 
	switch(op) {
		case '+' :
			return x+y;
		case '-' :
			return x-y;
		case '*' :
			return x*y;
		case '/' :
			return x/y;
	}
	return 0;
}*/

/*int gesan(int i,int j,char k) {
	//정올 자가진단 6 
	int input=1,x=0;
	if(k=='+') {
		x=i+j;
	} else if(k=='-') {
		x=i-j;
	} else if(k=='*') {
		x=i*j;
	} else if(k=='/') {
		x=i/j;
	}
	
	printf("%d %c %d = %d\n",i,k,j,x);
}*/

/*void swapvalue(int x,int y) {
	int tmp;
	
	tmp=x;
	x=y;
	y=tmp;
	
	printf("첫 번째 함수 실행 중 x = %d, y = %d \n",x,y);
}

void swapreference(int &x,int &y) {
	int tmp;
	
	tmp = x;
	x = y;
	y = tmp;
	
	printf("두 번째 함수 실행 중 x = %d, y= %d \n",x,y);
}*/

/*int a,b;
int hap,gop;
//합계와 곱 출력
void input() {
	printf("두 수를 입력하시오. ");
	scanf("%d %d",&a,&b); 
}
void gesan() {
	hap=a+b;
	gop=a*b;
}
void output() {
	printf("합  : %d \n",hap);
	printf("곱  : %d \n",gop);
}*/

/*void hodu(int a,int b)
{ //자가진단 8 
    int i=0,j=0;
    if(a > b){
        i=a;
        a=b;
        b=i;
    }
    for(j=a;j <= b;j++){
            printf("== %ddan ==\n",j);
        for(i=1;i<=9;i++){
            printf("%d * %d = %2d\n",j,i,j*i);
        }
    printf("\n");
    }
}*/

int main(void){
	
	
	
	/*int i=0,j=0;
    scanf("%d %d",&i,&j);
	//자가진단 8 
    hodu(i,j);
    return 0;*/
	
	/* //합계와 곱 출력 
	input();
	gesan();
	output();
	return 0;*/
	
	/*int a,b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d",&a,&b);
	
	swapvalue(a,b);
	printf("첫 번째 함수 실행 후 a = %d, b = %d \n",a,b);
	
	swapreference(a,b);
	printf("두 번째 함수 실행 후 a = %d, b = %d \n",a,b);
	
	return 0;*/
	
	/*int c[3]={0,};
	int i=0,j=1;
	char ch=0;
	//정올 자가진단 6 
	scanf("%d %c %d",&i,&ch,&j);
	
	gesan(i,ch,j);

	return 0;*/
	
	/*int a,b;
	char c;
	//사칙연산 
	scanf("%d %c %d",&a,&c,&b);
	printf("%d %c %d = %d \n",a,c,b,gesan(a,b,c));
	
	return 0;*/
	
	/*int i=0,j=1;
	//정올 자가진단 5 
	scanf("%d %d",&i,&j);
	
	printf("%d",milk(i,j));
	
	return 0;*/
	
	/*int i=0,j=0,k=1;
	
	scanf("%d %d %d",&i,&j,&k);
	
	max(i,j,k);
	
	return 0;*/
	
	/*int i=0,j=0,k=1;
	//정올 함수 1 자가진단 3 
	scanf("%d",&k);
	pizza(k);
	
	return 0;*/
	
	//2차원 배열
	/*int num, i;
	int count[11] = {0};
	
	while(1) {
		
		scanf("%d", &num);
		if(num < 1 || num > 10) break;
		count[num]++;
		
	}
	
	for(i = 1; i <= 10; i++) {
		
		if(count[i] > 0) {
			printf("%d : %d개\n", i, count[i]);
		}
		
	}
	
	return 0;*/
	
	/*char i;
	int apple[26]={0};
	
	while(1) {
		
		scanf("%c",&i);
		if(i<'A'||i>'Z') break;
		apple[i]++;
		
	}
	for(i=1;i<=26;i++) {
		if(apple[i]>0) {
			printf("%c : %d",'A'+i,apple[i]);
		}
	}*/
	
	/*int i;
	int cnt[10]={0};
	
	while(1) {
		scanf("%d",&i);
		if(i==0) break;
		cnt[i/10]++;
	}
	for(i=0;i<10;i++) {
		if(0<cnt[i]) {
			printf("%d : %d개\n",i,cnt[i]);
		}
	}
	return 0;*/
	
	/*int i;
	int chco[41]={0,1,1};
	
	for(i=3;i<=40;i++) {
		chco[i]=chco[i-1]+chco[i-2];
	
	//for(i=10;i<=40;i+=10) 
		//if(i%10==0)
		{
			printf("피보나치 수열 %d항 : %d\n",i,chco[i]);
		}
	}
	return 0;*/
	
	/*int i;
	int cake[100]={100};
	
	scanf("%d",&cake[1]);
	printf("%d %d ",cake[0],cake[1]);
	
	for(i=2;i<=100;i++) {
		cake[i]=cake[i-2]-cake[i-1];
		printf("%d ",cake[i]);
		if(cake[i]<0) {
			break;
		}
	}*/
	
	/*int i,j;
	int arr[3][3]={{3,5,4},{2,6,7},{8,10,1}};
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;*/
	
	/*int i,j;
	int cake[3][5]={{5,8,10,6,4},{11,20,1,13,2},{7,9,14,22,3}};
	for(i=0;i<3;i++) {
		for(j=0;j<5;j++) {
			printf("   %2d ",cake[i][j]);
		}
		printf("\n");
	}
	return 0;*/
	
	/*int i, j;
	int a[4][2], b[4][2],hap[4][2];
	
	printf("first array");
	
	for(i = 0; i < 4; i++) {
		
		for(j = 0; j < 2; j++) {
			
			scanf("%d", &a[i][j]);
			
		}
	}
	
	printf("second array");
	
	for(i = 0; i < 4; i++) {
		
		for(j = 0; j < 2; j++) {
			
			scanf("%d", &b[i][j]);
			
		}
	}
	
	for(i = 0; i < 4; i++) {
		
		for(j = 0; j < 2; j++) {
			
			hap[i][j] = a[i][j] * b[i][j];
			
		}
	}
	
	for(i = 0; i < 4; i++) {
		
		for(j = 0; j < 2; j++) {
			
			printf("%d ", hap[i][j]);
			
		}
		
		printf("\n");
		
	}*/
	
	
/*#pragma warning(disable:4996)
// 수행 #6 자연수 A이상 B이하 모든 소수 구하기 함수 구현
// 학번 : 1208 
// 이름 : 박세연
#include <stdio.h>
// 함수 선언 부분
void PrintPrimeNumber(int, int);
int main()
{
	int A, B;
	printf(" 자연수 두 개 입력 : ");
	scanf("%d %d", &A, &B);
	printf(" 소수 찾기 결과\n");
	PrintPrimeNumber(A, B);
	return 0;
}
// 함수 정의부분
void PrintPrimeNumber(int A, int B)
{*/
	// 작성해주세요~!
	/*for(int i = A; i <= B; i++) {
		int cnt = 0;
		for(int j = 1; j <= i; j++) {
			if(i % j == 0) {
				cnt++;
			}
		}
		if(cnt == 2) {
			printf("%d", i);
		}
	}*/
	
	/*for (int i = A; i <= B; i++) {
      if (i == 1) continue;
      int cnt = 0;
      for (int j = 2; j < i; j++) {
         if (i % j == 0) cnt++;
      }
      if (cnt == 0) {
         printf("%d ", i);
      }
   }
}*/
	
	/*point arr[3];
	
	arr[0].xpos = 10;
	arr[0].ypos = 10;
	arr[1].xpos = 20;
	arr[1].ypos = 20;
	arr[2].xpos = 30;
	arr[2].ypos = 30;
	
	for(int i = 0; i < 3; i++) {
		printf("%d ", arr[i].xpos);
		printf("%d ", arr[i].ypos);
	}*/
	
	/*point arr[3];
	
	for(int i = 0; i < 3; i++) {
		printf("점의 좌표 입력 : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for(i = 0; i < 3; i++) {
		printf("[%d, %d]", arr[i].xpos, arr[i].ypos);
	}
	return 0;*/
	
	/*person arr[3] = {0, };
	
	printf("이름, 전화번호, 나이 : ");
	
	for(int i=0;i<3;i++) {
		scanf("%s %s %d", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	
	int i;
	
	for(i=0;i<3;i++) {
		printf("%s %s %d \n",arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;*/
	
	/*int n, i;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		scanf("%d %s", &arr[i].age, arr[i].name);
		arr[i].join = i;
	}
	person* ptr = arr;
	printf("\n출력\n");
	
	for(i = 1; i <= n; i++) {
		printf("%d %s\n", (ptr + i)->age, (ptr + i)->name);
	}
	return 0;*/
	
	/*point cen = {2,7};
	double rad = 5.5;
	
	circle ring = {rad,&cen};
	
	printf("원의 반지름 : %g \n", ring.radius);
	printf("원의 중심 [%d %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	                            //ring.*center.xpos == (ring.center)->
	return 0;*/
	
	/*point p1 = {10,20};
	point p2 = {100,200};
	
	point p3 = Add(p1,p2);
	
	printf("p1 : [%d %d]\n", p1.xpos, p1.ypos);
	printf("p2 : [%d %d]\n", p2.xpos, p2.ypos);
	printf("Add(p1, p2) : [%d, %d]\n",p3.xpos, p3.ypos);
}
point Add(point po1, point po2) {
	point res;
	res.xpos = po1.xpos + po2.xpos;
	res.ypos = po1.ypos + po2.ypos;
	
	return res;*/
	
	/*point p1 = {2,4};
	point p2 = {5,7};
	
	point swappoint(p1, p2);
	return 0;
}

point swappoint(point p1, point p2) {*/

	/*char a[10]; //입력된 문자 순서 거꾸로 출력 
	int i;
	
	for(i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	for(i = 9; i >= 0; i--) {
		printf("%c ", a[i]);
	}
	printf("\n");
	return 0;*/

	/*int i, n[5];
	int sum;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
	}
	sum=n[0]+n[2]+n[4];
	printf("%d", sum);
	
	return 0;*/
	
	/*int i ,num[10]; //배열 2 형성평가 
	int count[7]={0};
	
	for(i=0;i<10;i++) {
		scanf("%d", &num[i]);
		if(num[i]<0||num[i]>6) break;
		count[num[i]]++;
	}
	for(i=1;i<7;i++) {
		printf("%d : %d\n", i, count[i]);
	}
	return 0;*/

	/*int i, score;
	int count[11]={0};
	
	while(1) {
		scanf("%d", &score);
		if(score==0) break;
		count[score/10]++;
	} 
	for(i=10;i>=0;i--) {
		if(count[i]>0) {
			printf("%d : %d person\n",i*10,count[i]);
		}
	}*/
	
	/*int i, j, n; //어디가 틀린거니 
	scanf("%d %d", &i,&j);
	int a[10] = {i, j};
	
	for(n = 2; n < 10; n++) {
		a[i] = (a[n - 2] + a[n - 1]) % 10;
	}
	for(n = 0; n < 10; n++) {
		printf("%d", a[n]);
	}
	return 0;*/

	/*int i,j,sum;
	int a[4][3]={{3,5,9},{2,11,5},{8,30,10},{22,5,1}};
	
	for(i=0;i<4;i++) {
		for(j=0;j<3;j++) {
			sum+=a[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("%d",sum);*/
	
	/*int i,j,sum[4];
	int arr[4][3];
	
	for(i=0;i<4;i++) {
		printf("%dclass?",i+1);
		for(j=0;j<3;j++) {
			scanf("%d", &arr[i][j]);
			sum[i]+=arr[i][j];
		}
	}
	for(i=0;i<4;i++) {
		printf("%dclass : %d\n",i+1,sum[i]);
	}*/
	
	/*int i,j;
	int arr[6][6]={0};
	
	for(j=1;j<6;j+=2) {
		arr[1][j]=1;
	}
	for(i=2;i<6;i++){
		for(j=1;j<6;j++) {
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];
		}
	}
	for(i=1;i<6;i++) {
		for(j=1;j<6;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	
	/*int i,j;
	int a[2][3],b[2][3],n[2][3];
	
	printf("first array\n");
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("second array\n");
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			n[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			printf("%d ",n[i][j]);
		}
		printf("\n");
	}*/
	
	/*int i,j;
	int g[2][3],h[2][3],n[2][3];
	
	printf("first array\n");
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("second array\n");
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			printf("%d",h[i][j]);
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			n[i][j]=g[i][j]*h[i][j];
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
		}
		printf("\n");
	}*/
	
	/*int i,j;
	int cheeze[4][2];
	int cake[4]={0};
	int pie[2]={0};
	int pizza=0;
	
	for(i=0;i<4;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&cheeze[i][j]);
			cake[i]+=cheeze[i][j];
			pie[j]+=cheeze[i][j];
			pizza+=cheeze[i][j];
		}
	}
	for(i=0;i<4;i++) printf("%d ",cake[i]/2);
	printf("\n%d %d\n",pie[0]/4,pie[1]/4);
	printf("%d",pizza/8);
	
	return 0;*/
	
	//파스칼의 삼각형 
	/*int cake[11][11]={0};
	int i, j, n;
	
	printf("삼각형 크기 입력 : ");
	scanf("%d", &n);
	
	cake[1][1] = 1;
	for(i = 2; i < n + 1; i++) {
		for(j = 1; j <= i; j++) {
			cake[i][j] = cake[i - 1][j - 1] + cake[i - 1][j];
		}
	}
	for(i = n; i >= 1; i--) {
		for(j = n; j >= 1; j--) {
			if(cake[i][j] != 0) {
				printf("%d ", cake[i][j]);
			}
		}
		printf("\n");
	}*/
	
	/*char cake[3][5], pizza[3][5];
    int i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            scanf(" %c", &cake[i][j]);
            pizza[i][j] = cake[i][j] + 32;
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%c ", pizza[i][j]);
        }
        printf("\n");
    }
    return 0;
    //shift,enter값이 들어가 오류 발생*/

//함수
/*rectangle rec1={{1,1},{4,4}};
rectangle rec2={{0,0},{7,5}};
showrecarea(rec1);
showrecpos(rec1);
showrecarea(rec2);
showrecpos(rec2);
}

void showrecarea(rectangle rect) {
	int result;
	result=((rect.two.xpos)-(rect.one.xpos))*((rect.two.ypos)-(rect.one.ypos));
	
	printf("넓이 : %d \n",result);
}
void showrecpos(rectangle rect) { 
	printf("좌측 상단 : [%d %d] \n", rect.one.xpos,rect.one.xpos);
	printf("좌측 하단 : [%d %d] \n", rect.one.xpos,rect.two.ypos);
	printf("우측 상단 : [%d %d] \n", rect.two.xpos,rect.one.ypos);
	printf("우측 하단 : [%d %d] \n", rect.two.xpos,rect.two.ypos);
}*/
}
