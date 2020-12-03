#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void mainmenu();
void student();
void admin();
void password();
void addteacherinfo();
void displayteacherinfo();
void displayroutine();
void addclassroutine();
void subjectlist();
void searchsub();
void addcollageinfo();
void displaycollageinfo();
void addbuschedule();
void searchbusinfo();
void editclassroutine();
void editbusinfo();
void editeacherinfo();
void deleteclassroutine();
void deleteteacherinfo();
void deletebusinfo();
void searchclasschedule();
void searbusschedule();
void searteacherinfo();

typedef struct
{
char busno[20];
char phone[30];
char stop[200];
}bus;
bus b;

struct routine
{
char day[50];
char one[25];
char two[25];
char three[25];
char four[25];
char five[25];
char sic[25];
char seven[25];
char eight[25];
};
struct routine r;

struct subject
{
char subname[25];
int marks;
};
struct subject s;

typedef struct
{
char name[30];
char qualify[30];
char phone[11];
char design[30];
}teach;
teach t;

typedef struct
{
char info[1000];
}infom;
infom inf;

char pass[10]={"bep"};
int i,j,k,l,m,n,p,d;
FILE *fptr;
void gotoxy (int x, int y)
{
COORD coord = { 0 ,0 };
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
mainmenu();
getch();
}
void mainmenu()
{
char d[40] = "WELCOME TO COLLEGE INFO SYSTEM";
int i,j,k,l,m;
gotoxy(20,5);
for(j=0;j<40;j++)
{
Sleep(10);
printf("\xb2");
}
gotoxy(20,5);printf("\xB2");
Sleep(20);
gotoxy(20,6);printf("\xB2");
Sleep(20);
gotoxy(20,7);printf("\xB2");
Sleep(20);
gotoxy(20,8);printf("\xB2");
gotoxy(20,9);printf("\xB2");
Sleep(20);
gotoxy(20,10);printf("\xB2");
Sleep(20);
gotoxy(20,11);printf("\xB2");
Sleep(20);
gotoxy(20,12);printf("\xB2");
gotoxy(20,13);printf("\xB2");
Sleep(20);
gotoxy(20,14);printf("\xB2");
Sleep(20);
gotoxy(20,15);printf("\xB2");
Sleep(20);
gotoxy(20,16);printf("\xB2");
gotoxy(20,17);printf("\xB2");
Sleep(20);
gotoxy(20,18);printf("\xB2");
Sleep(20);
gotoxy(20,19);printf("\xB2");
Sleep(20);
gotoxy(20,20);printf("\xB2");

gotoxy(60,5);printf("\xB2");
Sleep(20);
gotoxy(60,6);printf("\xB2");
Sleep(20);
gotoxy(60,7);printf("\xB2");
Sleep(20);
gotoxy(60,8);printf("\xB2");
Sleep(20);
gotoxy(60,9);printf("\xB2");
gotoxy(60,9);printf("\xB2");
Sleep(20);
gotoxy(60,10);printf("\xB2");
Sleep(20);
gotoxy(60,11);printf("\xB2");
Sleep(20);
gotoxy(60,12);printf("\xB2");
Sleep(20);
gotoxy(60,13);printf("\xB2");
Sleep(20);
gotoxy(60,14);printf("\xB2");
Sleep(20);
gotoxy(60,15);printf("\xB2");
Sleep(20);
gotoxy(60,16);printf("\xB2");
Sleep(20);
gotoxy(60,17);printf("\xB2");
Sleep(20);
gotoxy(60,18);printf("\xB2");
Sleep(20);
gotoxy(60,19);printf("\xB2");
Sleep(20);
gotoxy(60,20);printf("\xB2");

gotoxy(20,20);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(20,9);
for(j=0;j<40;j++)
{
Sleep(20);
printf("\xb2");
}

gotoxy(21,7);
printf("\t ");
for(m=0;m<30;m++)
{
Sleep(50);
printf("%c",d[m]);
}

gotoxy(23,11);
printf("\t \xdb\xdb\xdb\xb2 S. Student");
gotoxy(23,14);
printf("\t \xdb\xdb\xdb\xb2 A.Admin ");
gotoxy(23,17);
printf("\t \xdb\xdb\xdb\xb2 Q.Quit ");

char n;
gotoxy(21,22);
printf("Enter choice: ");
n=getch();
switch(n)
{
case 's':
student();
break;
case 'a':
system("cls");
password();
break;
case 'q':
system("cls");
default:
printf("\n\a\t\t\t Invalid choice!!");
Sleep(1000);
system("cls");
mainmenu();
}
}
void student()
{
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 STUDENT SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 2.Bus schedule \n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject list\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\n enter your choice");
int de;
scanf("%d",&de);
switch(de)
{
case 1:
searchclasschedule();
break;
case 2:
searbusschedule();
break;
case 3:
searteacherinfo();
break;
case 4:
displaycollageinfo();
break;
case 5:
searchsub();
break;
default:
printf("\aInvalid choice");
break;
}
}
void admin()
{
char sl;
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ADMIN SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 A. Add info\n");
printf("\n\t\t\t\xdb\xdb\xdb\xb2 S. Search info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 E. Edit info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 D. Delete info\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
sl=getch();
switch(sl)
{
case 'a':
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Add info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Routine \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
addclassroutine();
break;
case 2:
addbuschedule();
break;
case 5:
subjectlist();
break;
case 3:
addteacherinfo();
break;
case 4:
addcollageinfo();
break;
default:
printf("\ainvalid choice!!");
break;
}
break;
case 's':
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Search info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Routine \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1:
displayroutine();
break;
case 2:
searchbusinfo();
break;
case 4:
displaycollageinfo();
break;
case 5:
searchsub();
break;
case 3:
displayteacherinfo();
break;
default:
printf("\ainvalid choice");
break;
}
case 'e':
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Edit info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Routine \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int ed;
scanf("%d",&ed);
switch(ed)
{
case 1:
editclassroutine();
break;
case 2:
editbusinfo();
break;
case 3:
editeacherinfo();
break;
default:
printf("\ainvalid choice");
break;
}

case 'd':
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Delete info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Class Routine \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus Schedule \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. College info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 5. Subject List\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int de;
scanf("%d",&de);
switch(de)
{
case 1:
deleteclassroutine();
break;
case 2:
deletebusinfo();
break;
case 3:
deleteteacherinfo();
break;
default:
printf("\ainvalid choice");
break;
}
break;
}
}
void password()
{
system("cls");
int v=1;
for(v=1;v<=5;v++)
{
printf("\n\n\n\t\t");
char ch=0,passw[10];
printf("\n\n\n\n\n\n\t\t***** Password Protected *****");
printf("\n\n\t\tEnter Password:");
while(ch!=13)
{
ch=getch();
if(ch!=13)
{
putch('*');
passw[i] = ch;
i++;
}
}
passw[i] = '\0';
if(strcmp(pass,passw)==0)
{
admin();
break;
}
else
{
i=0;
printf("\a\n\n\t\twrong password !");
Sleep(1000);
system("cls");
printf("\n\n\t\Your Try %d's",v);
if(v==4)
{
system("cls");
printf("\a\nThis is your last chance pls type correct password \n Otherwise you have to wait 20 sec !!");
}
else if(v==5)
{
system("cls");
printf("\n\n\n\n\n\n\n\t\t\t\tPls try after 20 sec\n");
Sleep(2000);
int count=20;
do
{
Sleep(1000);
system("cls");
count--;
printf("\n\n\n\n\n\n\n\t\t\t\tWait...\a %d",count);
}while(count!=0);
system("cls");
password();
}
}
}
}
void addteacherinfo()
{
fptr=fopen("E:/project/teacherinfo.txt","ab+");
if(fptr==NULL)
{
printf("error in opening file");
getch();
}
while(1)
{
printf("\nEnter teachers full name\n");
scanf("%s[^\n]",&t.name);
printf("\nenter qaualificaton\n ");
scanf("\n%s[^\n]",&t.qualify);
printf("\nenter phone no ");
scanf("\n%s[^\n]",&t.phone);
printf("\nenter desination");
scanf("\n%s[^\n]",&t.design);
fwrite(&t,sizeof(t),1,fptr);
fflush(stdin);
printf("\nRecord sucessfully added");
printf("press Esc key to admin section or other key to continue");
char ex;
ex=getch();
if(ex==27)
exit(1);
}
fclose(fptr);
}
void displayteacherinfo()
{
system("cls");
printf("*************TEACHER INFORMATION************\n\n");
int i,j;
fptr=fopen("E:/project/teacherinfo.txt","rb+");
if(fptr==NULL)
{
printf("error in opening file");
getch();
}
for(i=0;i<=70;i++)
printf("-");
while(fread(&t,sizeof(t),1,fptr)==1)
{
printf("\nName: %s\n\nPhone no: %s\n\nQualification: %s\n\nDesination: %s\n",t.name,t.phone,t.qualify,t.design);
for(j=0;j<=70;j++)
printf("-");
}
fclose(fptr);
getch();
}
void addclassroutine()
{
FILE *f;
char test;
f=fopen("E:/project/classroutine.txt","ab+");
if(f==0)
{ f=fopen("E:/project/classroutine.txt","wb+");
system("cls");
printf("please wait while we configure your computer");
printf("/npress any key to continue");
getch();
}
while(1)
{
system("cls");
int i=1;
printf("\n enter day:");
scanf("%s[^\n]",&r.day);
fflush(stdin);
printf("\n Enter 1st period:");
scanf("%s[^\n]",&r.one);
printf("\n Enter 2nd period:");
scanf("%s[^\n]",&r.two);
printf("\n Enter 3rd period:");
scanf("%s[^\n]",&r.three);
printf("\n Enter 4th period:");
scanf("%s[^\n]",&r.four);
printf("\n Enter 5th period:");
scanf("%s[^\n]",&r.five);
printf("\n Enter 6th period:");
scanf("%s",&r.sic);
fwrite(&r,sizeof(r),1,f);
fflush(stdin);
system("cls");
printf("\n1 record successfully added");
i++;
printf("\n Press esc key to exit, any other key to add other record:");
test=getche();
if(test==27)
break;
}
fclose(f);
}
void displayroutine()
{
FILE *f;
int i;
if((f=fopen("E:/project/classroutine.txt","rb"))==NULL)
exit(0);
system("cls");
printf(" 10:30-11:15 11:15-12 12-12:45 12:45-1:30 1:30-2:15 2:15-3 3-3:45 3:45-4:30");
for(i=0;i<79;i++)
printf("-");
while(fread(&r,sizeof(r),1,f)==1)
{
printf("\n%s %s %s %s %s %s",r.day,r.one,r.two,r.three,r.four,r.five,r.sic);
printf("\n");
for(i=0;i<79;i++)
printf("-");

}
fclose(f);
getch();
}
void subjectlist()
{
system("cls");
fptr=fopen("E:/project/subjectlist.txt","ab+");
if(fptr==NULL)
{
printf("error");
getch();
}
while(1)
{
int i=1;
printf("\nenter subject name%d\n",i);
scanf("%s",&s.subname);
printf("\nenter marks\n");
scanf("%d",&s.marks);
fwrite(&s,sizeof(s),1,fptr);
fflush(stdin);
printf("\n %d record added",i);
i++;
printf("\npress ecs key to exit or other key to continue add another record");
char ch;
ch=getch();
if(ch==27)
break;
}
getch();
}
void searchsub()
{
system("cls");
int i,temp,sum=0;
if((fptr=fopen("E:/project/subjectlist.txt","rb"))==NULL)
{
printf("error");
getch();
}
printf("SUB.\t\t\tMARK\n") ;
while(fread(&s,sizeof(s),1,fptr)==1)
{
for(i=0;i<40;i++)
{
printf("-");
}
printf("\n %s\t\t%d\n",s.subname,s.marks);
temp=s.marks;
sum+=temp;
}
for(i=0;i<40;i++)
{
printf("-");
}
printf("\nTotal\t\t\t%d",sum);
getch();
}
void addcollageinfo()
{
system("cls");
fptr=fopen("E:/project/collegeinfo.txt","ab+");
while(1)
{
printf("enter collage info");
scanf("%s[^\n]",&inf.info);
fwrite(&inf,sizeof(inf),1,fptr);
fflush(stdin);
printf("record sucessfully added\n");
printf("\npress ESC key to exit");
char ch;
ch=getch();
exit(1);
}
fclose(fptr);
}
void displaycollageinfo()
{
system("cls");
fptr=fopen("E:/project/collegeinfo.txt","rb+");
printf("\t\t\n\n\n\n");
printf("\t\t****************COLLAGE INFORMATION********************");
printf("\t\t\n\n\n\n");
while(fread(&inf,sizeof(inf),1,fptr)==1)
for(i=0;i<=80;i++)
printf("-");
printf("\n");
{
printf("%s",inf.info);
}
printf("\n");
for(j=0;j<=80;j++)
printf("-");
getch();
}
void addbuschedule()
{
system("cls");
fptr=fopen("E:/project/businfo.txt","ab+");
while(1)
{
printf("\nEnter bus no: ");
scanf("%s",&b.busno);
printf("\nEnter phone no: ");
scanf("%s[^\n]",&b.phone);
printf("\nEnter bus stops and time");
scanf("%s[^\n]",&b.stop);
fwrite(&b,sizeof(b),1,fptr);
fflush(stdin);
printf("\nRecord sucessfully added");
printf("Press ESC key to exit or another key to continue");
char t;
t=getch();
if(t==27)
exit(1);
}
fclose(fptr);
}
void searchbusinfo()
{
system("cls");
fptr=fopen("E:/project/businfo.txt","rb+");
printf("\n\n\t\t********************BUS INFORMATION*******************\n");
while(fread(&b,sizeof(b),1,fptr)==1)
{
for(i=0;i<=70;i++)
printf("-");
printf("\nBus no: %s\nphone no: %s\nBus stops and time: %s",b.busno,b.phone,b.stop);
for(j=0;j<=70;j++)
printf("-");
}
fclose(fptr);
getch();
}
void editclassroutine()
{
char d[10];
int found=0;
printf("Enter day to modify");
scanf("%s",&d);
fptr=fopen("E:/project/classroutine.txt","rb+");
while(fread(&r,sizeof(r),1,fptr)==1)
{
if(strcmp(r.day,d)==0)
{
printf("record found");
printf("\n enter day:");
scanf("%s[^\n]",&r.day);
fflush(stdin);
printf("\n Enter 1st period:");
scanf("%s[^\n]",&r.one);
printf("\n Enter 2nd period:");
scanf("%s[^\n]",&r.two);
printf("\n Enter 3rd period:");
scanf("%s[^\n]",&r.three);
printf("\n Enter 4th period:");
scanf("%s[^\n]",&r.four);
printf("\n Enter 5th period:");
scanf("%s[^\n]",&r.five);
printf("\n Enter 6th period:");
scanf("%s",&r.sic);
fseek(fptr,-sizeof(r),SEEK_CUR);
fwrite(&r,sizeof(r),1,fptr);
break;
}
}
fclose(fptr);
}
void editbusinfo()
{
char d[20];
int found=0;
printf("Enter bus no");
scanf("%s",&d);
fptr=fopen("E:/project/businfo.txt","rb+");
while(fread(&b,sizeof(b),1,fptr)==1)
{
if(strcmp(b.busno,d)==0)
{
printf("record found");
printf("\nEnter bus no: ");
scanf("%s",&b.busno);
printf("\nEnter phone no: ");
scanf("%s[^\n]",&b.phone);
printf("\nEnter bus stops and time");
scanf("%s[^\n]",&b.stop);
fseek(fptr,-sizeof(b),SEEK_CUR);
fwrite(&b,sizeof(b),1,fptr);
break;
}
}
fclose(fptr);
}
void editeacherinfo()
{
char d[20];
int found=0;
printf("Enter teachers name to be modified");
scanf("%s",&d);
fptr=fopen("E:/project/teacherinfo.txt","rb+");
while(fread(&t,sizeof(t),1,fptr)==1)
{
if(strcmp(t.name,d)==0)
{
printf("record found");
printf("\nEnter teachers full name\n");
scanf("%s[^\n]",&t.name);
printf("\nenter qaualificaton\n ");
scanf("\n%s[^\n]",&t.qualify);
printf("\nenter phone no ");
scanf("\n%s[^\n]",&t.phone);
printf("\nenter desination");
scanf("\n%s[^\n]",&t.design);
fseek(fptr,-sizeof(t),SEEK_CUR);
fwrite(&t,sizeof(t),1,fptr);
break;
}
}
fclose(fptr);
}
void deleteclassroutine()
{
FILE *temp;
char d[13];
fptr=fopen("E:/project/classroutine.txt","rb");
if(fptr==NULL)
{
printf("error in opening main file");
exit(1);
temp=fopen("tempfile.txt","wb");
if(temp==NULL)
{
printf("\nerror in opening file");
exit(1);
}
printf("\nenter name of day to delete");
scanf("%s[^\n]",&d);
while(fread(&r,sizeof(r),1,fptr)==1)
{
if(strcmp(r.day,d)==0)
{
printf("record found");
continue;
}
else
fwrite(&r,sizeof(r),1,temp);
}
fclose(fptr);
fclose(temp);
remove("E:/project/classroutine.txt");
rename("tempfile.txt","classroutine.txt");
printf("\nrecord sucesspully deleted");
}
}
void deleteteacherinfo()
{
system("cls");
FILE *temp;
char dt[13];
fptr=fopen("E:/project/teacherinfo.txt","rb");
if(fptr==NULL)
{
printf("error in opening main file");
exit(1);
}
temp=fopen("tempfile.txt","wb");
if(temp==NULL)
{
printf("\nerror in opening file");
exit(1);
}
printf("\nenter name of teacher to delete");
scanf("%s[^\n]",&d);
while(fread(&t,sizeof(t),1,fptr)==1)
{
if(strcmp(t.name,dt)==0)
{
printf("record foud");
continue;
}
else
fwrite(&t,sizeof(t),1,temp);
}
fclose(fptr);
fclose(temp);
remove("E:/project/teacherinfo.txt");
rename("tempfile.txt","teacherinfo.txt");
printf("\nrecord sucesspully deleted");
}
void deletebusinfo()
{
FILE *temp;
char d[13];
fptr=fopen("E:/project/businfo.txt","rb");
if(fptr==NULL)
{
printf("error in opening main file");
exit(1);
}
temp=fopen("tempfile.txt","wb");
if(temp==NULL)
{
printf("\nerror in opening file");
exit(1);
}
printf("\nenter name of bus no to delete: ");
scanf("%s[^\n]",&d);
while(fread(&b,sizeof(b),1,fptr)==1)
{
if(strcmp(b.busno,d)==0)
{
printf("record foud");
continue;
}
else
fwrite(&b,sizeof(b),1,temp);
}
fclose(fptr);
fclose(temp);
remove("E:/project/businfo.txt");
rename("tempfile.txt","businfo.txt");
printf("\nrecord sucesspully deleted");
}
void searchclasschedule()
{
char de[35];
fptr=fopen("E:/project/classroutine.txt","rb+");
if(fptr==NULL)
{
printf("error");
getch();
}
printf("enter name of day to search");
scanf("%s[^\n]",&de);
while(fread(&r,sizeof(r),1,fptr))
{
if(strcmp(r.day,de)==0)
printf("\nrecord found\n");
system("cls");
printf(" 10:30-11:15 11:15-12 12-12:45 12:45-1:30 1:30-2:15 2:15-3 3-3:45 3:45-4:30");
for(i=0;i<79;i++)
printf("-");
printf("\n%s %s %s %s %s %s",r.day,r.one,r.two,r.three,r.four,r.five,r.sic);
printf("\n");
for(i=0;i<79;i++)
printf("-");
break;
}
fclose(fptr);
}
void searbusschedule()
{
char dk[35];
fptr=fopen("E:/project/businfo.txt","rb+");
if(fptr==NULL)
{
printf("error");
getch();
}
printf("enter name of bus no: ");
scanf("%s[^\n]",&dk);
while(fread(&b,sizeof(b),1,fptr))
{
if(strcmp(r.day,dk)==0)
printf("\nrecord found\n");
system("cls");
printf("\n\n\t\t********************BUS INFORMATION*******************\n");
for(i=0;i<=70;i++)
printf("-");
printf("\nBus no: %s\nphone no: %s\nBus stops and time: %s\n",b.busno,b.phone,b.stop);
for(j=0;j<=70;j++)
printf("-");
break;
}
fclose(fptr);
}
void searteacherinfo()
{
char dm[35];
fptr=fopen("E:/project/teacherinfo.txt","rb+");
if(fptr==NULL)
{
printf("error");
getch();
}
printf("enter name of teacher to search: ");
scanf("%s[^\n]",&dm);
while(fread(&t,sizeof(t),1,fptr))
{
if(strcmp(t.name,dm)==0)
printf("\nrecord found\n");
system("cls");
printf("\n\n\t\t********************TEACHER INFORMATION*******************\n");
for(i=0;i<=70;i++)
printf("-");
printf("\nName: %s\n\nPhone no: %s\n\nQualification: %s\n\nDesination: %s\n",t.name,t.phone,t.qualify,t.design);
for(j=0;j<=70;j++)
printf("-");
break;
}
fclose(fptr);
}
