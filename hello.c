#include<stdio.h>
// int main(void)
// {
//     int ch1,ch2;
//     ch1=getchar();
//     ch2=fgetc(stdin);

//     putchar(ch1);
//     fputc(ch2,stdout);
//     return 0;
// }
  
// int main(void)
// {
//     int ch;
//     while(1)
//     {
//         ch=getchar();
//         if(ch==EOF)
//             break;
//         putchar(ch);
//     }
//     return 0;
// }

// int main(void)
// {
//     char str[5];
//     int i;

//     for(i=0;i<3;i++)
//     {
//         fgets(str,sizeof(str),stdin);
//         printf("Read %d: %s \n",i+1,str);
//     }
//     return 0;
// }

// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ",stdout);
//     fgets(perID,sizeof(perID),stdin);

//     fputs("이름 입력: ",stdout);
//     fgets(name,sizeof(name),stdin);

//     printf("주민번호:%s \n",perID);
//     printf("이름:%s \n",name);
//     return 0;
// }

// void clearlinefromreadbuffer(void)
// {
//     while(getchar()!='\n');
// }
// int main(void)
// {
//     char perID[7];
//     char name[10];
    
//     fputs("주민번호 앞 6자리 입력: ",stdout);
//     fgets(perID,sizeof(perID),stdin);
//     clearlinefromreadbuffer();

//     fputs("이름 입력: ",stdout);
//     fgets(name,sizeof(name),stdin);

//     printf("주민번호:%s \n",perID);
//     printf("이름:%s \n",name);
//     return 0;
// }

// #include<string.h>
// int main(void)
// {
//     char str1[20]="1234567890";
//     char str2[20];
//     char str3[5];

//     strcpy(str2,str1);
//     puts(str2);

//     strncpy(str3,str1,sizeof(str3));
//     puts(str3);

//     strncpy(str3,str1,sizeof(str3)-1);
//     str3[sizeof(str3)-1]=0;
//     puts(str3);
//     return 0;
// }

// #include<math.h>
// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(void)
// {
//     struct point pos1,pos2;
//     double distance;

//     fputs("point1 pos: ",stdout);
//     scanf("%d %d",&pos1.xpos,&pos1.ypos);
//     fputs("point2 pos: ",stdout);
//     scanf("%d %d",&pos2.xpos,&pos2.ypos);

//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));

//     printf("두점의 거리는 %g입니다.\n",distance);
//     return 0;
// }

// #include<string.h>

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct person man1,man2;
//     strcpy(man1.name,"이지우");
//     strcpy(man1.phoneNum,"010-4676-0092");
//     man1.age=23;
    
//     printf("이름입력: ");scanf("%s",man2.name);
//     printf("번호입력: ");scanf("%s",man2.phoneNum);
//     printf("나이 입력:");scanf("%d",&(man2.age));

//     printf("이름: %s \n",man1.name);
//     printf("번호: %s \n",man1.phoneNum);
//     printf("나이: %d\n",man1.age);

//     printf("이름: %s \n",man2.name);
//     printf("번호: %s \n",man2.phoneNum);
//     printf("나이: %d\n",man2.age);
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct point pos= {10,20};
//     struct person man={"이승기","010-4115-1515",21};
//     printf("%d %d\n",pos.xpos,pos.ypos);
//     printf("%s %s %d \n",man.name,man.phoneNum,man.age);
//     return 0;
// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct person arr[3]={
//         {"이승기","010-2323-1313",21},
//         {"정지영","010-2322-1414",22},
//         {"한지수","010-2113-1212",19}
//     };
//     int i;
//     for(i=0;i<3;i++)
//         printf("%s %s %d \n",arr[i].name,arr[i].phoneNum,arr[i].age);
//     return 0;
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(void)
// {
//     struct point pos1={1,2};
//     struct point pos2={100,200};
//     struct point*pptr=&pos1;

//     (*pptr).xpos+=4;
//     (*pptr).ypos+=5;
//     printf("[%d,%d]\n",(*pptr).xpos,(*pptr).ypos);
    
//     pptr=&pos2;

//     (*pptr).xpos+=1;
//     (*pptr).ypos+=2;
//     printf("[%d,%d]\n",(*pptr).xpos,(*pptr).ypos);
//     return 0;
//     return 0;
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };
// struct circle
// {
//     double radius;
//     struct point*center;
// };
// int main(void)
// {
//     struct point cen={2,7};
//     double rad=5.5;

//     struct circle ring={rad,&cen};
//     printf("원의 반지름: %g \n",ring.radius);
//     printf("원의 중심: [%d %d]\n",(ring.center)->xpos,(ring.center)->ypos);
//     return 0;
// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// typedef struct person PERSON;
// struct point
// {
//     int xpos;
//     int ypos;
// };
// typedef struct point POINT;
// int main(void)
// {
//     PERSON arr[3]={
//         {"이승기","010-2323-1313",21},
//         {"정지영","010-2322-1414",22},
//         {"한지수","010-2113-1212",19}
//     };
//     POINT pos={23,12};
//     int i;
//     for(i=0;i<3;i++)
//         printf("%s %s %d \n",arr[i].name,arr[i].phoneNum,arr[i].age);
//     printf("%d %d\n",pos.xpos,pos.ypos);
//     return 0;
// }

// typedef struct point
// {
//     int xpos;
//     int ypos;
// }POINT;
// void showposition(POINT pos)
// {
//     printf("[%d , %d]\n",pos.xpos,pos.ypos);
// };
// POINT getcurrendtposition(void)
// {
//     POINT cen;
//     printf("input Current pos:");
//     scanf("%d %d",&cen.xpos,&cen.ypos);
//     return cen;
// }
// int main(void)
// {
//     POINT curpos=getcurrendtposition();
//     showposition(curpos);
//     return 0;
// }

// typedef struct point
// {
//     int xpos;
//     int ypos;
// }POINT;

// POINT addpoint(POINT pos1, POINT pos2)
// {
//     POINT pos={pos1.xpos+pos2.xpos,pos1.ypos+pos2.ypos};
//     return pos;
// }

// POINT minpoint(POINT pos1, POINT pos2)
// {
//     POINT pos={pos1.xpos-pos2.xpos,pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void)
// {
//     POINT pos1={5,6};
//     POINT pos2={2,9};
//     POINT result;

//     result=addpoint(pos1,pos2);
//     printf("[%d %d]\n",result.xpos,result.ypos);
//     result=minpoint(pos1,pos2);
//     printf("[%d %d]\n",result.xpos,result.ypos);
//     return 0;
// }

// typedef enum syllable
// {
//     Do=1,Re=2,Mi=3,Fa=4,So=5,La=6,Si=7
// }SYLLABLE;

// void Sound(SYLLABLE sy)
// {
//     switch(sy)
//     {
//         case Do:
//             puts("도는 하얀 도라지♫"); return;
//         case Re:
//             puts("레는 둥근 레코드♫"); return;
//         case Mi:
//             puts("미는 파란 미나리♫"); return;
//         case Fa:
//             puts("파는 예쁜 파랑새♫"); return;
//         case So:
//             puts("솔은 작은 솔방울♫"); return;
//         case La:
//             puts("라는 라디오고용~♫♫"); return;
//         case Si:
//             puts("시는 졸졸 시냇물♫"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~♫♫♫♫");
// }

// int main(void)
// {
//     SYLLABLE tone;
//     for(tone=Do;tone<=Si;tone+=1)
//         Sound(tone);
//     return 0;
// }

// int main(void)
// {
//     FILE*fp=fopen("data1.txt","wt");
//     if(fp==NULL)
//     {
//         puts("파일오픈 실패");
//         return -1;
//     }
//     fputc('A',fp);
//     fputc('B',fp);
//     fputc('C',fp);
//     fclose(fp);
//     return 0;
// }

// int main(void)
// {
//     int ch,i;
//     FILE*fp=fopen("data.txt","rt");
//     if(fp==NULL)
//     {
//         puts("파일오픈 실패");
//         return -1;
//     }
//     for(i=0;i<3;i++)
//     {
//         ch=fgetc(fp);
//         printf("%c \n",ch);
//     }
//     fclose(fp);
//     return 0;
// }

#include<stdlib.h>

char*readusername(void)
{
    char*name=(char*)malloc(sizeof(char)*30);
    printf("whats your name?");
    gets(name);
    return name;
}

int main(void)
{
    char*name1;
    char*name2;
    name1=readusername();
    printf("name1: %s\n",name1);
    name2=readusername();
    printf("name2: %s\n",name2);

    printf("again name1: %s\n",name1);
    printf("again name2: %s\n",name2);
    free(name1);
    free(name2);
}