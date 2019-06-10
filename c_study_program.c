#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void array();
void pointer();
void function();
void string();

void menu();

void strexample();
void p_second_1();
void p_second_2();


void pointer_array();
void pointer_string();
void pointer_function();

void p_menu();
void s_menu();

void main(){
	menu();
}

void menu(){
	int menu;
	int a;
	printf("메뉴를 선택하세요:\n");
	printf("1: 문자열 // 2: 베열 // 3: 함수 // 4: 포인터 \n");
	scanf("%d",&menu);
	// 1: string 2: array 3: function 4: pointer
	while(1){
		if(menu==1){
			s_menu();
		}
		else if(menu==2){ 
			array();
		}
		else if(menu==3){
			
		}
		else if(menu==4){
			p_menu();
		}
		else{
			printf("error\n");
		}
	}
}
void s_menu(){
	int a;
	printf("1: 정의 ///////2: 예시 //3: 원래 메뉴로 \n"); // choose which one to see in string section
			scanf("%d",&a);
			if(a==1){ // if we enter 1 we can see string's definition
			string();
			}
			else if(a==2){
			strexample(); // if we enter 2 we can see examples of string
			}
			else if(a==3){
			menu();
			}
}

void p_menu(){
	int a;
	printf("enter 1 : 포인터 정의 // 2: 포인터와 배열 // 3: 포인터와 스트링 // 4: 포인터와 함수 // 5: 원래 메뉴로\n");
			scanf("%d",&a);
			if(a==1){
				pointer();
			}	
			else if(a==2){
				pointer_array();
			}
			else if(a==3){
				pointer_string();
			}
			else if(a==4){
				pointer_function();
			}
			else if(a==5){
				menu();
			}
}
void array(){
	//설명:메인에 써야할까 매트릭스 함수에 써야할까?
   int a[3] = { 0 };
   int b[3][3] = { 0 };
   int i,j,temp;
   char answer='Y';
   printf("슨생님:배열을 배워봅시다!!!\n");
   printf("슨생님:1차원 배열부터 알아볼까요~?\n");
   printf("\n--------------------------------------\n");
   printf("슨생님:1차원 배열 a를 선언하려면 다음과 같이 써줘야합니다.\n>>int a[3];\n슨생님:int형으로 1행 3열 선언했고 지금 a에는 쓰레기 값이 들어있는 방이 3개가 있을 것 입니다. 따라서 초기화를 해주시면 더욱 좋겠죠?\n>>int a[3]={0};\n\n슨생님:여러분의 이해를 더욱 돕기위하여 a라는 배열(방)에 여러분이 넣고 싶은 정수를 3가지 넣어봅시다.\n");
   for (i = 0; i < 3; i++) {
      scanf("%d", &a[i]);
   }
   printf("슨생님:여러분이 넣어 준 정수들이 a라는 1차원 배열 안으로 들어가 있을 것 입니다.\n");
   for (i = 0; i < 3; i++) {
      printf("1행 %i열 a[%i]=%d\n",i+1,i, a[i]);
   }
   printf("\n슨생님:보셨나요? a라는 배열은 0번째 index 자리부터 들어가게 됩니다.\n\n");
   
   printf("슨생님:다음은 2차원 배열을 알아봅시다.\n");
   printf(">>int b[3][3]={0}\n");
   printf("슨생님:다음과 같이 3행3열의 2차원 배열을 선언해주었습니다.\n");
   
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("[%d][%d]=%d\n", i, j, b[i][j]);
      }
   }

   printf("\n\nQ.그렇다면 예제를 풀어봅시다.\n");
   printf("1차원 배열 f[3]={0,1,2}선언 후 0번째 index와 2번째 index의 값을 바꿔봅시다.\n\n");
   while (1) {
      printf("답을 원하시면 대문자 Y를 힌트를 원하시면 H를 입력해주세요.\n");
      scanf(" %c", &answer);
      if (answer == 'H') {
         printf(">>힌트는 int temp=0이라는 변수를 선언해볼 것\n");
      }
      if (answer == 'Y') {
         printf("\n\n정답공개!!\n");
         printf("--------------------------------\n");
         printf(">>int f[3] = { 0,1,2 };\n>>int i, temp = 0;\n>>printf('바뀌기 전은 다음과 같다.'\n'');\n>>for (i = 0; i < 3; i++) {\nprintf('a[.%d]=.%d', i, a[i]);\n}\n>>printf(''\n''\n'');\n>>temp = a[0];\n>>a[0] = a[2];\n>>a[2] = temp;\n>>printf('바뀐 후는 다음과 같다.'\n'');\n>>for (i = 0; i < 3; i++) {\nprintf('a['%d']='%d'', i, a[i]);\n}'\n");
         break;
      }
   }
	menu();
}


void pointer(){
	printf("포인터의 정의\n");
   printf("포인터란?\n");
   printf("값을 저장하는 것이 아닌 그 값의 \"주소\"를 저장하는 것\n"); //포인터의 정의
   printf(" \n");
   printf("그림과 함께 설명하겠다\n");
   printf(" \n");

   printf("num 을 변수라고하고 40의 값을 갖고있다고 해보자.\n\n");

   int num = 40;
   int *numPointer = NULL;
   numPointer = &num;

   printf("\t**40**\n");
   printf("\t**num**\n");
   printf("\t*******\n");
   printf("\t%d\n\n", &num);

   printf("포인터 변수를 선언할 때는 \'*\'를 사용한다!\n");
   printf("포인터 변수 *numPointer를 선언하면 다음과 같은 구조로 생성된다\n\n");


   printf("\t***%d***\n", &num);
   printf("\t**numPointer**\n");
   printf("\t**************\n");
   printf("      \t%d\n\n", &numPointer);
   printf("\n 이처럼 numPointer는 num의 주소 값을 value로 갖는다\n\n");

   printf("※주의※ 포인터 변수 사용시 초기화를 해줘야 한다. \t ex) int * pointer = NULL\n\n");
   printf("\n정리해보면\n");

   printf("num의 값: %d\n", num);
   printf("num변수의 주소:%p\n", &num);
   printf("numPointer변수의 값: %p\n", &num);
   printf("numPointer가 가리키는 값: %d\n\n", *numPointer);
   printf("\n※주의※ 이때 주소의 값이 다른것은 주소는 동적으로 할당되기때문에 값이 다를 수 밖에없다.\n");
   printf("num변수의 주소와 numPointer의 값이 동일한 것만 기억하자!\n");



   printf("\n\'*\'연산자는 포인터가 가리키는 메모리 공간에 접근시 사용되는 연산자로\n");
   printf("포인터 변수가 가리키는 변수의 값을 바꿀 수 있다.\n\n");
   int *pnum;
   int number = 12345;
   pnum = &number;

   printf("\n EXAMPLE \n");
   printf("변경 전 num의 값: %d\n", number);
   printf("변경 전 numPointer의 값: %d\n", *pnum);
   *pnum = 54321;
   printf("변경 후 num의 값: %d\n", number);
   printf("변경 후 numPointer의 값: %d\n", *pnum);

   printf("\n");
}


void function(){
}


void string(){ //definition of the string 
	char a[10]="";
   	char b[10] = "크a";
	char c[10] = "aaaa";
   	char d[10] = "abcd";
	char e[10];
    char f[10] = "ab";
	char g[10] = "aabaa";
    char h[10] = "b";
	
	printf("String\n\n");
    printf("문자열 관련 함수를 다룰 때 사용하는 헤더\n");
    printf("#include <string.h> 필수!!\n");
	
      printf("strlen : null을 제외한 문자열 길이를 반환한다.\n");
      printf("한글은 유니코드로, 한글자당 2개짜리이다.\n");
      printf("\n");
      printf("<예시>\n");
      printf("char a[10]="";\n");
      printf("char b[10] = \"크a\";\n");
      printf("strlen(a)=%d\n", strlen(a));
      printf("strlen(b)=%d\n", strlen(b));
	

   printf("strcmp : 문자열을 비교한다.\n");
   printf("         같으면 0, 앞쪽이 더 크면 양수 더 작으면 음수를 도출한다.\n");
   printf("         사전식 나열이 앞 쪽에 위치하면 더 작다고 판별한다.\n");
   
   printf("\n");
   printf("<예시>");
   printf("char a[10] = \"aaaa\";\n");
   printf("char b[10] = \"abcd\";\n");
   printf("strcmp(a,b)=%d\n", strcmp(c, d));
   printf("strcmp(b,a)=%d\n", strcmp(d, c));
	
	
   printf("strcpy : 문자열을 복사할 때 사용\n");
   printf("         문자열 변수가 2개 일 때 하나의 문자열을 다른 문자열에 복사한다.\n");
   printf("\n");
   printf("<예시>\n");
   printf("char a[10];\n");
   printf("char b[10] = \"ab\";\n");
   printf("\n");
   printf("strcpy(a,b)=%s\n",strcpy(e,f));
   printf("a=%s\n",e);
   printf("b=%s\n", f);
	
   printf("strcat : 문자열 이어쓰기\n");
   printf("         문자열 2개가 있을 때 한 문자열 뒤에 다른 문자열을 덧붙인다.\n");

   printf("\n");
   printf("<예시>\n");
   printf("char a[10] = \"aabaa\";\n");
   printf("char b[10] = \"b\";\n");
   printf("strcat(a,b)=%s\n", strcat(g, h));
   printf("strcat(b,a)=%s\n", strcat(h, g));
   s_menu();
}

void strexample(){ // we can see examples of the string
	char a[80];
	char b[80];
	int i=0;
	
	while(1){
	printf("enter which example you want to see\n");
	printf("1: strcat // 2:strcpy // 3: strcmp // 4: strlen // 5: main menu\n" );
	scanf("%d",&i);
		
	if(i==1){
	printf("let's try string concat\n");
	printf("=========================\n");
	printf("enter string1:");
	scanf("%s",&a);
	printf("enter string2:");
	scanf("%s",&b);
	printf("string concat : %s\n",strcat(a,b));
		break;
	}
	else if(i==2){
	printf("let's try string copy\n");
	printf("=========================\n");
	printf("enter string1:");
	scanf("%s",&a);
	printf("enter string2:");
	scanf("%s",&b);
	printf("string copy : %s\n",strcpy(a,b));
	}
	else if(i==3){
	printf("let's try string compare\n");
	printf("=========================\n");
	printf("enter string1:");
	scanf("%s",&a);
	printf("enter string2:");
	scanf("%s",&b);
	printf("string compare : %d\n",strcmp(a,b));
		break;
	
	}
	else if(i==4){
	printf("let's try string length\n");
	printf("=========================\n");
	printf("enter string1:");
	scanf("%s",&a);
	printf("enter string2:");
	scanf("%s",&b);
	printf("string1's length : %d\n",strlen(a));
	printf("string2's length : %d\n",strlen(b));
	
	}
	else if(i==5){
		printf("go back to menu\n");
		s_menu();
	}
		break;
	}
}


void pointer_array(){
	printf("포인터와 배열\n");
   printf("배열의 이름은 첫번째 배열 요소의 메모리 주소를 뜻한다\n");
   printf("베열의 이름은 포인터이다. 단, 그 값을 바꿀 수 없는 '상수 형태의 포인터'이다.\n");
   printf("따라서 배열의 이름을 '포인터 상수'라고도 한다.\n");
   printf("int [] a = {1,2,3,4,5} 라는 배열이 있다면 nums를 출력했을 때 nums[0]의 메모리 주소가 출력된다\n");
   printf(" 즉 nums와 &nums[0]는 같다 \n");

   void p_second_1();
   printf("\n");

   printf("\n\n이처럼 포인터의 증감 연산으로 배열처럼 접근할 수 있다.\n");
   printf("즉, arr[i] == *(arr+i)\n");

   void p_second_2();
	p_menu();
}

void second_1()
{
   int nums[5] = { 1,2,3,4,5 };
   printf("nums = %d", nums);
   printf("&nums[0] = %d", &nums[0]);
}

void second_2()
{
   int nums[5] = { 1,2,3,4,5 };
   int *pNums = nums;

   printf("pNums = %d\n", pNums);
   printf("*pNums = %d \n", *pNums);
   printf("* (pNums + 1 ) = %d\n", *(pNums + 1));
   printf("* (pNums + 2 ) = %d\n", *(pNums + 2));
}

void pointer_string(){
	printf("포인터와 스트링\n");
}
void pointer_function(){
	printf("포인터와 함수");
   printf("\n");
   printf("\n");


   printf("포인터 변수를 인자로 갖는 함수\n");
   printf("함수를 호출 할 때 주소를 이용해서 호출할 수 있다.\n");
   printf("\n");

   printf("일반 함수와 포인터 변수를 갖는 함수의 차이점\n");
   printf("일반 함수의 경우에는 int a,int b의 값에 영향을 주지 않는다.\n");
   printf("포인터 변수를 갖는 함수는 int a, int b의 데이터 값에 영향을 준다.");
   
   printf("\n");
   printf("\n");

   printf("주소를 반환하는 함수\n");
   printf("지역변수의 주소를 반환하는 함수의 경우에는 static을 이용해서 선언해줘야 한다.");
   printf("static이라는 메모리 공간을 이용해서 변수가 소멸되지 않게 해준다.");
	p_menu();
}


