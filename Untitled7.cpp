/*#include <stdio.h>

int main() {
	/*int i,j;
	
	for(i=1;i<=9;i++){
		for(j=2;j<5;j++){
			printf("%d * %d = %2d",j, i, j*i);
		}
		printf("\n");
	}
	return 0;*/ //구구단 
	
	/*int oddcount;//복습 
	int num;
	int evencount;
	int banana;
	
	for(num=0;num<10;num++){
		scanf("%d",&banana);
		if(banana%2==0){
			evencount++;
		} else{
			oddcount++;
		}
	}
	printf("even : %d\nodd : %d",evencount,oddcount);*/
	
	/*
	//복습 
	int a,b;
	int max,min;
	int sum=0; //합 
	int count;
	
	scanf("%d %d",&a,&b);
	if(a>b){
		max=a;
		min=b;
	} else{
		min=a;
		max=b;
	} 
	for(;min<=max;min++){
		if((min%3==0)||(min%5==0)){
			sum=min+sum;
			count++;
		}	
	}
	printf("sum : %d\navg : %.3lf",sum,sum/(double)count);*/
	
	/*int i,j;
	int n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("(%d, %d) ",i,j);
		}
		printf("\n");
	}*/
	

/*int i, arr[] = { 10,9,8,7,6,5,4,3,2,1 };
int* ptr = arr;
int total = *ptr, len = sizeof(arr) / sizeof(int);
printf("ptr : %p, *ptr : %d, total : %d\n", ptr, *ptr, total);
for (i = 0; i < len-1; i++) {
total += *(++ptr);
printf("ptr : %p, *ptr : %d, total : %d\n", ptr, *ptr, total);
}
printf("total : %d\n", total);

return 0;*/

/*int i,j,n; //입력한 수대로 별찍기 
scanf("%d",&n);

for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("*"); 
	}
	printf("\n");
}
for(i=n;i>=1;i--){
	for(j=1;j<=i;j++){
		printf("*");
	}
	printf("\n");
}
return 0;*/

/*int i,j,n,m; //***
              // ** 질문하기 
             //  *
scanf("%d",&n);

for(i=0;i<n;i++){
	for(j=0;j<i+1;j++){
		printf(" ");
	}
	for(m=0;m<n-i;j++){
		printf("*");
	}
	printf("\n");
}
return 0;*/

/*int i,j; //피라미드 
for(i=1;i<=5;i++){
	for(j=1;j<=5-i;j++){
		printf(" ");
	}
	for(j=1;j<=i*2-1;j++){
		printf("*");
	}
	printf("\n");
}
return 0;*/

/*int i,j,n;
scanf("%d",&n);
int m=2*n-1; //2*n-1 공백과 별이 찍히는 관계 
for(i=0;i<n;i++){
	for(j=0;j<i;j++) printf(" ");
	for(j=0;j<m-2*i;j++) printf("*");
	for(j=0;j<i;j++) printf(" ");
} 
printf("\n"); //역피라미드 
*/
/*int i,j,k;
for(i=4;j=1;i>=0;i--,j +=2){
	for(k=1;k<=i;k++){
		printf(" ");
	}
	for(k=1;k<=j;k++){
		printf("*");
	}
	printf("\n");
} 
return 0;*/
 
/*int i,j,n,num; //평행사변형 
scanf("%d",&n);//*2-1,공백 출력 
for(i=1;i<=n;i++){
	for(j=n-i;j<=n;j++){
		printf(" ");
	}
	for(j=1;j<=n;j++){
		printf("*");
	}
	printf("\n");
}
return 0;*/

/*int i,j;
int n,num=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%d",num++);
	}
	printf("\n");
}
return 0; */

/*int i,j,n,num=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1+i*(i-1)/2;j<=i*(i+1)/2;j++){
		printf("%d",j);
	}
	printf("\n");
}*/


//#include<stdio.h>

/*void line() {//1
	printf("---------------------------------\n");//4
}
int main() {
	printf("함수 호출\n");//2
	line();//3
	printf("끝!");//5
}*/

/*int ten() {
	return 10;
}
int main() {
	printf("함수 호출 시 10 출력\n");
	printf("%d\n",ten());
	printf("끝!");
}*/

/*void plus(int a,int b) //중괄호 안에선 선언불가 
{
	printf("두 수를 더하면 %d\n",a+b);//이곳으로 대입됨 a에 n1,b에 n2 
}
int main() {
	int n1,n2;
	printf("숫자 두 개 입력 후 함수 호출\n");
	scanf("%d %d",&n1,&n2);
	plus(n1,n2);//n1,n2의 값이 복사되서 
	printf("끝!");

}*/

/*int plus(int a,int b) { //plus=더해진 값을 저장 
	int c=a+b;
	return c;
}
int main() {
	int n1,n2,sum;
	printf("숫자 두 개 입력 후 함수 호출");
	scanf("%d %d",&n1,&n2);
	sum=plus(n1,n2); //더한 값이 저장된 plus를 sum에 대입 
	//위아래 문장을 합쳐서 출력하면 printf("두 두의 합은 %d\n",plus(n1,n2)); 여기선 sum필요X 
	printf("두 수의 합은 %d\n",sum);
	printf("끝!"); 
}*/

/*int Add(int,int); //함수선언 
int main()
{
	int x,y,sum;
	printf("정수 두 개를 입력하세요~!(예 1 2) : ");
	scanf("%d %d",&x,&y);
	sum=Add(x,y); //함수 호출 
	printf("%d + %d = %d",x,y,sum);
	return 0; 
}
//함수정의 
int Add(int n1,int n2){
	int n3=n1+n2;
	return n3;
}*/

/*int GetMax(int,int,int);
int main() {
	int nResult=0;
	printf("MAX : %d\n",GetMax(1,2,3));
	printf("MAX : %d\n",GetMax(2,3,1)*2);
	printf("MAX : %d\n",nResult=GetMax(3,1,2));
	return 0;
}
int GetMax(int a,int b,int c)
{
	int nMax=a;
	if(b>nMax) nMax=b;
	if(c>nMax) nMax=c;
	
	return nMax;
}*/

/*int Add(int num1,int num2); //매개변수 0, 반환값 0 
void ShowAddResult(int num); //매개변수 0, 반환값 X 
int InputNum(); //매개변수 X, 반환값 0 
void HowToUseThisProg(); //매개변수 X, 반환값 X 

int main() {
	int result,num1,num2;
	HowToUseThisProg();
	num1=InputNum();
	num2=InputNum();
	result=Add(num1,num2);
	ShowAddResult(result);
	return 0;
}

int Add(int num1,int num2){
	return num1+num2;
}
void ShowAddResult(int num)
{
	printf("덧셈결과 출력 : %d\n",num);
}
int InputNum(){
	int num;
	scanf("%d",&num);
	return num;
}
void HowToUseThisForg() {
	printf("두 개의 정수 입력하면 덧셈결과 출력\n");
	printf("정수 입력\n");
}*/

/*int Add(int num1, int num2); // 매개변수 O, 반환값 O
void ShowAddResult(int num); // 매개변수 O, 반환값 X
int InputNum();              // 매개변수 X, 반환값 O
void HowToUseThisProg();     // 매개변수 X, 반환값 X
int main()
{
int result, num1, num2;
HowToUseThisProg();
num1 = InputNum();
num2 = InputNum();
result = Add(num1, num2);
ShowAddResult(result);
return 0;
}
int Add(int num1, int num2) {
return num1 + num2;
}
void ShowAddResult(int num) {
printf("덧셈결과 출력 : %d\n", num);
}
int InputNum() {
int num;
scanf("%d", &num);
return num;
}
void HowToUseThisProg() {
printf("두 개의 정수를 입력 덧셈결과 출력\n");
printf("두개의 정수 입력\n");
}*/

//int main() {
	/* //p164자가진단 7 
	int i, j, n,m=1;
    char a = 'A';
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for (j = 1; j < n - i + 2; j++) {
            printf("%d ", m);
            m++;
        }
        for (j = 0; j < i; j++) {
            printf("%c ", a++);
        }
        printf("\n");
    }*/
    
    /* //평행사변형  
    int h,k;
    char d;
    scanf("%d %d %c",&h,&k,&d);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h+k-1;j++){
            if(d =='R'){
                 if( (i+j >h ) && (i+j <h+k+1)){
                   printf("*");
                }
                 else{
                     printf(" ");
                 }
                
            }
            else{
                int m =2*(i-1)+1;
                if(i+j > m && i+j < k+m+1){
                    printf("*");
                    }
                else{
                    printf(" ");
                    }
			}			
        }
        printf("\n");
    }
 
    return 0;*/
    
    /*int i,j,n; //풀던거 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("#");
		}
		printf("\n");
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
	} for(j=0;j<n;j++){
		printf("#");
	}
	
	return 0;*/
	
	
//}


//#include<stdio.h>

/*int num1=10;
void SimpleFunc() {
	int num2=10;
	num1++;
	num2++;
	printf("전역num1=%d,지역num2=%d\n",num1,num2);
}
int main(){
	SimpleFunc();
	SimpleFunc();
	SimpleFunc();
	SimpleFunc();
	SimpleFunc();
	
	return 0;
}*/

/*int NumCompare(int num1,int num2); //함수 이해 
int main() {
	printf("3과 4중에 큰 수는 %d이다.\n",NumCompare(3,4));
	printf("7과 2중에 큰 수는 %d이다.\n",NumCompare(7,2));
}
int NumCompare(int num1,int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}*/

/*int Absocompare(int, int);

int main(){
	int num1,num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d",&num1,&num2);
	printf("%d와 %d중 절대값이 큰 정수:  %d\n",num1,num2,Absocompare(num1,num2));
	return 0;
}
int Absocompare(int num1,int num2){
	if(GetAbsoValue(num1)>GetAbsoValue(num2))
		return num1;
	else
		return num2;
} 
int GetAbsoValue(int num){
	if(num<0)
		return num*(-1);
	else return num;
}*/

/*int Getmax(int num1, int num2, int num3);
int GetMin(int num1, int num2, int num3);
int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수 : %d\n", GetMax(num1, num2, num3));
	printf("가장 작은 수 : %d\n", GetMin(num1, num2, num3));
	return 0;
}
int GetMax(int num1, num2, num3);
{
	int a = num1;
}*/

/*double fah(double num1) {
	return num1*1.8+32
}
double cel(double num2) {
	return (num2-32)/1.8
}
int main()
{
	scanf("%d")
}*/

/*#include<stdio.h> //클래스룸 
void Input(char*);
void Upper(char*);
int main() {
	char buffer[1025] = {0, };
	Input(buffer);
	Upper(buffer);
	printf("%s\n",buffer);
	return 0;
}
void Input(char buffer[]){
	scanf("%s\n",&buffer);
}
void Upper(char buffer[]){
	for(int i=0;i<1025;i++){
		if(buffer[i] >= 'a' && buffer[i] <= 'z') printf("%c",buffer[i]);
		else if(buffer[i] >= 'A' && buffer[i] <= 'Z')
		buffer[i]=(buffer[i] * 32);
		printf("%c",buffer[i]);
	}
}*/

/*#include<stdio.h>

int GCD(int a, int b);

void Input(int arr[], int len);

long long SumGCD(int arr[], int len);

int main() {

	int TC, num;
	long long int result;
	int arr[101] = { 0 };

	scanf("%d", &TC);

	while(TC) {
		
		scanf("%d", &num);
		Input(arr, num);
		result = SumGCD(arr, num);
		printf("%lld\n", result);
		
	}
	
	return 0;
	
}  
void Input(int arr[], int len){
	
}
long long SumGCD(int arr[], int len){
	
}
int GCD(int a, int b){
	
	int x;
	
	while(b) {
		
		x = a % b;
		a = b;
		b = x;
		
		printf("b : %d", b);
		
	}
	
	return a;*/
	
	/*int abs_a = (a > 0) ? a : -a;
	int abs_b = (b > 0) ? b : -b;

	if (a == 0 && b == 0) {
		return 0;
	}

	else if (a == 0 || b == 0) {
		return a == 0 ? b : a;
	}

	if (abs_a > abs_b) {
		return abs_a % abs_b ? GCD(b, a%b) : b;
	}
	else {
		return abs_b % abs_a ? GCD(a, b%a) : a;
	}*/
//}

/*#include<stdio.h> //구조체 

struct Product{
	char name[20];
	char serial[20];
	int year;
	int price;
};
int main() {
	struct Product n;
	
	printf("이름 시리얼 연도 가격 입력");
	scanf("%s",n.name);
	scanf("%s",n.serial);
	scanf("%d",&(n.year));
	scanf("%d",&(n.price));
	
	printf(" 이름 : %s, 시리얼 : %s, 연도 : %d, 가격 : %d",n.name,n.serial,n.year,n.price); 
}*/

#include<stdio.h>
#include<string.h>
#define MAX 3

struct profile
{
	char name[20];
	int Korean,english,math,science;
};

int main()
{
	struct profile p1[MAX];
	
	int i;
	int tot[MAX]={0};
	double avg[MAX]={1};
	
	printf("성적 산출 프로그램\n");
	printf("\n");
	printf("%-1d명의 이름을 입력하시오 : ",MAX);
	
	for(i=0;i<MAX;i++) {
		scanf("%s",&p1[i].name);
	}
	
	for(i=0;i<MAX;i++) {
		printf("%s의 국어 영어 수학 과학 성적 : ",p1[i].name);
		scanf("%d",&p1[i].Korean);
		scanf("%d",&p1[i].english);
		scanf("%d",&p1[i].math);
		scanf("%d",&p1[i].science);
		
		tot[i] +=(p1[i].Korean+p1[i].english+p1[i].math+p1[i].science);
		
		avg[i] =(double)tot[i] / 4;
	}
	printf("\n");
	
	for(i=0;i<MAX;i++) {
		printf("%s의 성적표\n",p1[i].name);
		printf("국어 영어 수학 과학 총점 평균\n");
		printf("%-1d %3d %3d %3d %3d %3.1f \n",
		p1[i].Korean,p1[i].english,p1[i].math,p1[i].science,tot[i],avg);
	}
	getchar();
	getchar();
	getchar();
	
	return 0;
}
