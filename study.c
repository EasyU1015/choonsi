#include <stdio.h>
// int main(void)
// {
//     int num1 = 2;
//     int num2 = 3;
//     int result1 = num1&num2;
//     int result2 = num1 | num2;
//     int restult3 = num1 ^ num2;
//     printf("result1: %d \n", result1);
//     printf("result2: %d \n", result2);
//     printf("result3: %d\n", restult3);
//     return 0;

// }
// int main(void)
// {
//     int num1 = 1;
    
//     int result1 = num1 <<1;
//     Console.WriteLine("result1: " + result1);
    
//     int result2 = result1<<2;
//     Console.WriteLine("result2: "+ result2);

//     int result3= result2 >>3;
//     Console.WriteLine("result3: "+ result3);

// }
//int main(void)
// {
//     int num1;
    
//     printf("정수 입력: ");
//     scanf("%d", &num1);
//     int num2= ~num1+1;
//     printf("%d \n", num2);
    
// }
// int main(void)
// {
//     int num1=3;
//     int num2=8;
//     int num3=4;
//     int result1 = num1 <<4,num2 >>4;
// }
// int main(void)
// {
//     char ch=9;
//     int inum=1052;
//     double dnum=3.1415;
//     printf("변수 ch의 크기: %d \n", sizeof(ch));
//     printf("변수 inum의 크기:%d \n", sizeof(inum));
//     printf("변수 dnum의 크기: %d \n", sizeof(dnum));

//     printf("char의 크기: %d \n", sizeof(char));
//     printf("int의 크기: %d \n", sizeof(int));
//     printf("long의 크기:%d \n", sizeof(long));
//     printf("long long의 크기:%d \n", sizeof(long long));
//     printf("float의 크기: %d \n", sizeof(float));
//     printf("double의 크기: %d \n", sizeof(double));
//     return 0;
// }
// int main(void)
// {
//     double rad; 
//     double area;
//     printf("원의 반지름 입력: ");
//     scanf("%lf", &rad); lf mall

//     area= rad*rad*3.1415;
//     printf("원의 넓이: %f \n", area);
//     return 0;
// }
//씨발새끼
// int main(void)
// {
//     char ch1= 'A', ch2=65;
//     int ch3='Z', ch4=90;

//     printf("%c %d \n", ch1, ch1);
//     printf("%c %d \n", ch2, ch2);
//     printf("%c %d \n", ch3, ch3);
//     printf("%c %d \n", ch4, ch4);
//     return 0;
// }
//개새끼 
//   int main(void)
// {
//     int x1, y1;
//     int x2, y2;
//     printf("좌 상단의 x, y의 좌표: ");
//     scanf("%d %d", &x1,&y1);
//     printf("우 하단의 x, y 좌표: ");
//     scanf("%d %d", &x2,&y2);
//     printf("직사각형의 넓이:%d \n",(x1-x2)*(y1-y2));
//     return 0;

//  }
//2
// int main(void)
// {   
//     double num1, num2;
//     printf("첫 번째 실수: , 두 번째 실수: ");
//     scanf("%lf %lf", &num1, &num2);
    
//     printf("덧셈: %f \n",num1+num2);
//     printf("뺄셈: %f \n", num1-num2);
//     return 0;
// }
//4
// int main(void)
// {
//     char ch1='A', ch2=65;
//     int ch3='Z', ch4=90;
//     printf("%c %d \n", ch1, ch2);
//     printf("%d %c \n", ch3, ch4);

//     return 0;
// }
// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d", &num);
//     printf("아스키코드로 변환값: %c \n", num);
// }
//5
// int main(void)
// {
//     char ch;
//     //int num;
//     printf("알파벳: ");
//     scanf("%c", &ch);
//     printf("%d \n",ch);
// }
// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력: ");
//     scanf("%d %o %x", &num1, &num2, &num3);
//     printf("입력된 정수 10진수 출력: ");
//     printf("%d %d %d \n", num1,num2,num3);
//     return 0;
// }
// int main(void)
// {   
//     float num1;
//     double num2;
//     long double num3;

//     printf("실수 입력1(e 표기법으로): ");
//     scanf("%f", &num1);
//     printf("입력된 실수 %f \n", num1);

//     printf("실수 입력2(e 표기법으로): ");
//     scanf("%lf ",&num2);
//     printf("입력된 실수 %f \n", num2);
    
//     printf("실수 입력3(e 표기법으로): ");
//     scanf("%LF \n", &num3);
//     printf(" 입력된 실수 %LF\n", num3);
//     return 0;
// }
//2 8 10 16진수 fuck

// int main(void)
// {
//     int dan=0, num=1;
//     printf("몇 단? ");
//     scanf("%d", &dan);
    
//     while (num<10)
//     {
//         printf("%d x %d = %d \n", dan, num, dan*num);
//         num++;

//     }
    
//     return 0;
// }
//1
// int main(void)
// {
//     int num;
//     int i = 0;
//     printf("양의 정수 입력: ");
//     scanf("%d", &num);
    
//     while (i<num)
//     {
//         printf("Hello World! \n");
//         num--;

//     }
//     return 0;   
// }
//22222222222222222222222222222222222
// int main(void)
// {
//     int num=0, pix=0;
//     printf("양의 정수 하나: ");
//     scanf("%d", &num);
    
//     while (pix++<num)
//     {
//         printf("%d \n", 3*pix);
        
//     }
//     return 0;
// }
//33333333333333333333333333333333333333333333333333333
// int main(void)
// {
//     int total=0, num=1;
    
//     while (num != 0)
//     {
//         printf("정수 입력(0 to quit): ");
//         scanf("%d", &num);
//         total += num;
        
//     }
//     printf("합:%d \n", total);
//     return 0;
// }

//4.
// int main(void)
// {
//     int dan=0, num=9;
//     printf("몇 단: ");
//     scanf("%d", &dan);

//     while (num>0)
//     {
//         printf("%d x %d = %d \n", dan,num,dan*num);
//         num--;
//     }
//     return 0;
// }
//5.555555555555555555555555555555555555555555555555 tlqkf
// int main(void)
// {
//     int total=0,i=0;
//     int num, input;

//     printf("정수 몇 개 넣을꺼야: ");
//     scanf("%d", &num);
//     while (i++<num)
//     {
//         printf("정수입력: ", input);
//         scanf("%d", &input);
//         total+=input;

//     }
//     printf("평균: % f", (double)total/num);
//     return 0;
// }
// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while (cur<10)
//     {
//         is=1;
//         while (is<10)
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int total=0, num=0;

//     do
//     {
//         printf("정수 입력(0 to quit):");
//         scanf("%d", &num);
//         total+=num;
//     }while(num!=0);
//     printf("합계 %d 원입니다. \n", total);
    
//     return 0;   
// }

// int main(void)
// {
//     int total=0;
//     int i, num;
//     printf("0부터 num까지의 덧셈, num은?");
//     scanf("%d", &num);

//     for(i=0; i<num+1; i++)
//         total+=i;

//     printf("0부터 %d까지 덧셈결과: %d \n", num, total);
//     return 0;
// }
// int main(void)
// {
//     double total=0.0;
//     double input=0.0;
//     int num=0;

//     for ( ; input>=0.0; )
//     {
//         total+=input;
//         printf("실수 입력(minus to quit) : ");
//         scanf("%lf", &input);
//         num++;
//     }
//     printf("평균: %f \n", total/(num-1));
//     return 0;
// }
// int main(void)
// {
//     int cur, is;

//     for(cur=2; cur<10; cur++)
//     {
//         for(is=1; is<10; is++)
//             printf("%dx%d=%d \n",cur, is, cur*is);
//         printf("\n");
//     }
//     return 0;
// }
// int main(void)                   tlqkf
// {
//     int sum = 0, i = 0, num = 0;
//     while (i<5)
//     {
//         while (num<=0)
//         {
//             printf("정수 5개 입력" , i+1);
//             scanf("%d", &num);

//         }
//         sum += num;
//         num=0;
//         i++;
//     }
//     printf("총 합: %d \n", sum);
//     return 0;
// }
// int main(void)
// {
//     int i=0;
//     int j=0;

//     while (i<5)
//     {
//         while (j<i)
//         {
//             printf("o ");
//             j++;
//         }
//         j=0;
//         printf("* \n");
//         i++;
//     }
//     return 0;
// }

// int main(void)
// {
//     int total=0;
//     int num=0;
//     do
//     {
//         total += num;
//         num = num+2;
//     } while (num <= 100);
//     printf("짝수의 합: %d \n", total);
//     return 0;

// }
// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while(cur<10)
//     {
//         is=1;
//         while(is<10)
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int cur=2;
//     int is=0;
//     do
//     {
//         is=1;
//         do
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         } while (is<10);
//         cur++;
//         printf("\n");
//     } while (cur<10);
//     return 0;
// }

//tlqkf
// int main(void)
// {
//     int total=0;
//     int num1, num2;
//     printf("숫자 두개: ");
//     scanf("%d %d", &num1, &num2);
//     for (total=0; num1 <=num2 ;num1++ )
//     {
//         total+=num1;
//     }
    
//     printf("num1부터 num2까지의 합은: %d \n", total);
//     return 0;
// }

//c언어 반복문 연습
// int main(void)
// {
//     int i=1;
//     while (i<=10)
//     {
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int i=10;
//     while (i>=1)
//     {
//         printf("%d \n", i);
//         i--;
//     }
//     return 0;
// }
// int main(void)
// {
//     int sum=0;
//     int i=0;
//     while (i<=100)
//     {
//         sum += i;
//         i++;
//     }
//     printf("합: %d \n", sum);
//     return 0;
// }
// int main(void)
// {
//     int sum=0;
//     int i=2;
//     while (i<=100)
//     {
//         sum += i;
//         i = i+2;
//     }
//     printf("짝수의 총 합:%d \n", sum);
//     return 0;
// }

// int main(void)
// {
//     int i = 1;
//     int sum = 0;
//     while(i<=100)
//     {
//         i =i+2;
//         sum += i;
//     }
//     printf("홀수의 합: %d \n", sum);
//     return 0;
// }
//계승 구하기
// int main(void)
// {
//     int n, i, result=1;
//     printf("임의의 양의 정수: ");
//     scanf("%d", &n);
//     i=n;
//     while (i>=1)
//     {
//         result *=i;
//         i--;
//     }
//     printf("%d \n",result);
//     return 0;   
// }
//약수 구하기
// int main(void)
// {
//     int n,k=1;
//     printf("임의의 수: ");
//     scanf("%d", &n);
//     while (k<n+1)
//     {
//         while (n % k == 0)
//         {
//             printf("%d \n",k);
//             k++;
//         }
//         k++;
//     }
//     return 0;
// }
//공약수 구하기////////////////////////////////////////////////
// int main(void)
// {
//     int num1, num2;
//     int i,gcd;
//     printf("두 개의 정수 입력:");
//     scanf("%d %d", &num1, &num2);
//     for (i=1 ; i<=num1 && i<=num2; i++)
//     {
//         if(num1%i==0 && num2%i==0)
//             gcd=i;
//     }
//     printf("%d와 %d의 최대공약수:%d \n",num1, num2, gcd);
//     return 0;
// }

// if문
//if 문 연습하기
// int main(void)
// {
//     int num1, num2;
//     printf("입력받은 두 수: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2)
//     {
//         printf("%d \n", num1);
//     }
//     else
//     printf("%d \n", num2);
// return 0;
// }
// int main(void)
// {
//     int a;
//     printf("입력 받은 수");
//     scanf("%d", &a);
//     if (a<0)
//     {
//         printf("음수 \n");
//     }
//     else
//     printf("양수 \n");
// return 0;
// }
// int main(void)
// {
//     int num1, num2, num3;
//     int max;
//     printf("첫 번째 수: ");
//     scanf("%d", &num1);
//     max = num1;
//     if (max>num2)
//     {
//         printf("두 번째 수: ");
//         scanf("%d", &num2);
//         max = num2;
//         printf("세번째 수: ");
//         scanf("%d", &num3);
//         max=num3;
//         printf("제일 큰 수: %d \n", max);
//     }
//     return 0;
// }
//4.
// int main(void)
// {
//     int num;
//     printf("입력받은 수: ");
//     scanf("%d", &num);
//     if(num%2==0)
//     printf("짝수 \n");
//     else
//     printf("홀수 \n");
//     return 0;
// }
//5.
// int main(void)
// {
//     int num;
//     printf("입력받은 수: ");
//     scanf("%d", &num);
//     if(num%3==0)
//     printf("3의 배수 \n");
//     else
//     printf("3의 배수가 아니다. \n");
//     return 0;
// }
//6.
// int main(void)
// {
//     int age;
//     printf("나이");
//     scanf("%d", &age);
//     if(age>=8)
//     printf("5000원 \n");
//     else if(age>=60)
//     printf("2500원 \n");
//     else
//     printf("무료 \n");
//     return 0;
// }
//7.
// int main(void)
// {
//     int num;
//     printf("입력 받은 수: ");
//     scanf("%d", &num);
//     if(num%3==0 && num%5==0)
//     printf("3의 배수이면서 5의 배수이다. \n");
//     else
//     printf("3과 5의 배수가 아니다. \n");
//     return 0;
// }
//8.
// int main(void)
// {
//     int age;
//     printf("나이: ");
//     scanf("%d", &age);
//     if(age<8)
//     printf("무료 \n");
//     else if(age>=60)
//     printf("무료 \n");
//     else
//     printf("5000원 \n");
//     return 0;

// }




//23.11.22 8 ~ 9장
// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d", &num);
//     if (num<0)
//     printf("입력 값은 0보다 작다. \n");
//     if(num>0)
//     printf("입력 값은 0보다 크다. \n");
//     if(num==0)
//     printf("입력 값은 0이다. \n");
    
//     return 0;
// }
// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;
//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("몇 번: \n");
//     scanf("%d", &opt);
//     printf("두 개의 실수 입력: ");
//     scanf("%lf %lf", &num1, &num2);
//     if (opt==1)
//         result = num1+num2;
//     if(opt==2)
//         result = num1-num2;
//     if(opt==3)
//         result = num1*num2;
//     if(opt==4)
//         result=num1/num2;
//     printf("결과값: %f \n", result);
//     return 0;

// }
// int main(void)
// {
//     int num;

//     for (num=1; num < 100; num++)
//     {
//         if(num%3==0 || num%4==0)
//             printf("3또는 4의 배수: %d \n", num);

//     }
//     return 0;
// }

// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;
//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("선택: ");
//     scanf("%d", &opt);
//     printf("두 개의 실수를 입력해주세요: ");
//     scanf("%lf %lf", &num1, &num2);

//     if(opt==1)
//         result=num1+num2;
//     else if (opt==2)
//         result=num1-num2;
//     else if (opt ==3)
//         result = num1*num2;
//     else
//         result = num1/num2;
//     printf("결과; %f", result);
//     return 0;
    
// }

// int main(void)
// {
//     int num, abs;
//     printf("정수 입력: ");
//     scanf("%d", &num);
// 조건 ? 참 : 거짓
//     abs= num>0 ? num:num*(-1);
//     printf("절댓값: %d \n", abs);
//     return 0;
// }
//예제
// int main(void)
// {
//     int num;
//     for (num = 1; num < 100; num++)
//     {
//         if(num%7 == 0 || num % 9 ==0)
//             printf("7과9의 배수: %d \n", num);
//     }
//     return 0;    
// }
// int main(void)
// {
//     int num1, num2;
//     int result;
//     printf("두 수를 입력해주세요: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2)
//             result = num1-num2;
//     else
//         result = num2-num1;
//         printf("두 수의 차: %d \n", result);
//     return 0;
// }
// int main(void)
// {
//     int math,korea,english;
//     double average;
//     printf("수학 국어 영어: ");
//     scanf("%d %d %d", &math, &korea, &english);
//     average = (math+korea+english)/3.0;
//     printf("평균:%f \n", average);
//     if (average>=90)
//         printf("A \n");
//     else if (average>=80)
//         printf("B \n");
//     else if (average>=70)
//         printf("C \n");
//     else if (average>=50)
//         printf("D \n");
//     else
//         printf("F \n");
//     return 0;        
    
// }
// int main(void) //tlqkf
// {
//     int num1, num2;
//     int result;
//     printf("두 개의 수: ");
//     scanf("%d %d", &num1, &num2);
//     result=(num1>num2)? num1-num2: num2-num1;
//     printf("뺄셈결과: %d \n", result);
//     return 0;
// }

//break
// int main(void)
// {
//     int sum=0, num=0;

//     while(1)
//     {
//         sum += num;
//         if (sum>5000)
//             break;
//         num++;       
//     }
//     printf("sum: %d \n", sum);
//     printf("num: %d \n", num);
//     return 0;
// }
//continue
// int main(void)
// {
//     int num;
//     printf("start \n");

//     for (num=1; num < 20; num++)
//     {
//         if(num%2==0 || num%3==0)
//         continue;
//         printf("%d ", num);
//     }
//     printf("end \n");
//     return 0;
// }
//예제 구구단 tlqkf
// int main(void)
// {
//     int dan, num;
//     for (dan = 0; dan < 10; dan++)
//     {
//         if(dan%2 !=0)
//         continue;
//         for (num = 1; num < 10; num++)
//         {
//             if(dan<num)
//             break;
//             printf("%d x %d = %d \n", dan, num, dan*num);
//         }
//         printf(" \n");        
//     }
//     return 0;
// }

// int main(void)
// {
//     int A, Z;
//     int result;
//     for (A = 0; A < 10; A++)
//     {
//         for(Z=0; Z,10; Z++)
//         {
//             if(A==Z)
//             continue;
//             result=
//         }
//     }
    
// }

//switch
// int main(void)
// {
//     int num;
//     printf("1이상 5이하: ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("1은 ONE \n");
//         break;
//     case 2:
//         printf("2는 TWO \n");
//         break;
//     case 3:
//         printf("3은 THREE \n");
//         break;
//     case 4:
//         printf("4는 FOUR \n");
//         break;
//     case 5:
//         printf("5는 FIVE \n");
//         break;
//     default:
//         printf("뭐야 \n");
//         break;
//     }
//     return 0;
// }
// int main(void)
// {
//     char sel;
//     printf("M 오전, A 오후, E 저녁 \n");
//     printf("입력");
//     scanf("%c", &sel);
//     switch (sel)
//     {
//     case 'M':
//     case 'm':
//         printf("Morning \n");
//         break;
//     case 'A':
//     case 'a':
//         printf("Afternoon \n");
//         break;
//     case 'E':
//     case 'e':
//         printf("Evening \n");
//         break;
    
//     }
//     return 0;
// }
//함수
// int main(void)
// {
//     int num1, num2;
//     num1=printf("12345\n");
//     num2=printf("I love my home \n");
//     printf("%d %d \n", num1, num2);
//     return 0;
// }

// int Add(int num1, int num2)
// {
//     return num1 + num2;
// }

// int main(void)
// {
//     int result;
//     result=Add(5,3);
//     printf("합: %d \n", result);
//     result=Add(9,1);
//     printf("합: %d \n", result);
//     return 0;
// }
// int Add(int num1, int num2)
// {
//     return num1+num2;
// }
// void ShowAddResult(int num)
// {
//     printf("덧셈결과 출력: %d \n", num);
// }
// int ReadNum(void)
// {
//     int num;
//     scanf("%d", &num);
//     return num;
// }
// void HowToUseThisProg(void)
// {
//     printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//     printf("두 개의 정수를 입력해주세요 : \n");
// }
// int main(void)
// {
//     int result, num1, num2;
//     HowToUseThisProg();
//     num1=ReadNum();
//     num2=ReadNum();
//     result = Add(num1, num2);
//     ShowAddResult(result);
//     return 0;
// }
// int AbsoCompare(int num1, int num2);
// int GetAbsoValue(int num);
// int main(void)
// {
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d와 %d중 절댓값이 큰 정수: %d \n",
//         num1, num2, AbsoCompare(num1, num2));
//     return 0;
// }
// int AbsoCompare(int num1, int num2)
// {
//     if(GetAbsoValue(num1) > GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;
// }
// int GetAbsoValue(int num)
// {
//     if(num<0)
//         return num * (-1);
//     else
//         return num;
// }
//예제 dddddddddd
// int three(int nu1, int nu2, int nu3);
// int big(int bi);
// int small(int sm)
// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("가장 큰 수: %d 가장 작은 수: %d \n", big(bi),small(sm));
//     return 0;

// }
// int three(int nu1, int nu2, int nu3)
// {
//     if()
// }