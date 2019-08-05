//this program works with w(cursor up),a(cursor left),s(cursor down),d(cursor right),x(select x),0(select 0),and c(close)
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
int i =0,j=0;
int cursor[10]={0,0,0,0,0,0,0,0,0};
int cross[10]={0,0,0,0,0,0,0,0,0};
int zero[10]={0,0,0,0,0,0,0,0,0};
int b1=13,b2=33,b3=53,b4=13,b5=33,b6=53,b7=13,b8=33,b9=53;
int presentx=0;
int presenty=0;
char player[]="PLAYER 1 IS X PLAYER 2 IS 0";
char author[]="PROGRAM BY RISHABH RANA";
void pat();
void nullcursor()
{
if(presentx==0&&presenty==0)
cursor[0]=0;
if(presentx==1&&presenty==0)
cursor[1]=0;
if(presentx==2&&presenty==0)
cursor[2]=0;
if(presentx==0&&presenty==1)
cursor[3]=0;
if(presentx==1&&presenty==1)
cursor[4]=0;
if(presentx==2&&presenty==1)
cursor[5]=0;
if(presentx==0&&presenty==2)
cursor[6]=0;
if(presentx==1&&presenty==2)
cursor[7]=0;
if(presentx==2&&presenty==2)
cursor[8]=0;

}
void movecursor()
{
if(presentx==0&&presenty==0)
cursor[0]=1;
if(presentx==1&&presenty==0)
cursor[1]=1;
if(presentx==2&&presenty==0)
cursor[2]=1;
if(presentx==0&&presenty==1)
cursor[3]=1;
if(presentx==1&&presenty==1)
cursor[4]=1;
if(presentx==2&&presenty==1)
cursor[5]=1;
if(presentx==0&&presenty==2)
cursor[6]=1;
if(presentx==1&&presenty==2)
cursor[7]=1;
if(presentx==2&&presenty==2)
cursor[8]=1;

}
activex()
{

if(presentx==0&&presenty==0)
cross[0]=1;
if(presentx==1&&presenty==0)
cross[1]=1;
if(presentx==2&&presenty==0)
cross[2]=1;
if(presentx==0&&presenty==1)
cross[3]=1;
if(presentx==1&&presenty==1)
cross[4]=1;
if(presentx==2&&presenty==1)
cross[5]=1;
if(presentx==0&&presenty==2)
cross[6]=1;
if(presentx==1&&presenty==2)
cross[7]=1;
if(presentx==2&&presenty==2)
cross[8]=1;


}

void activeo()
{

 if(presentx==0&&presenty==0)
zero[0]=1;
if(presentx==1&&presenty==0)
zero[1]=1;
if(presentx==2&&presenty==0)
zero[2]=1;
if(presentx==0&&presenty==1)
zero[3]=1;
if(presentx==1&&presenty==1)
zero[4]=1;
if(presentx==2&&presenty==1)
zero[5]=1;
if(presentx==0&&presenty==2)
zero[6]=1;
if(presentx==1&&presenty==2)
zero[7]=1;
if(presentx==2&&presenty==2)
zero[8]=1;

}
void input()
{
char ch;
nullcursor();
ch=getch();
if(ch=='c')
exit(0);
if(ch=='w')
presenty=presenty+1;
if(ch=='a')
presentx=presentx-1;
if(ch=='s')
presenty=presenty+1;
if(ch=='d')
presentx=presentx+1;
if(ch=='x')
activex();
if(ch=='0')
activeo();
if(presentx>3||presentx<0)
presentx=0;
if(presenty>2||presenty<0)
presenty=0;

movecursor();
pat();

}

void zero1st()
{

 if(i>=0&&i<=8&&j>=0&&j<=20)
 {
    if(i==2&&(j>=5&&j<=13))
    printf("\b*");
    if(i==7&&(j>=5&&j<=13))
    printf("\b*");
    if(j==5&&(i>=2&&i<=7))
    printf("\b*");
    if(j==13&&(i>=2&&i<=7))
    printf("\b*");

 }
}
 void zero2nd()
{

 if(i>=0&&i<=8&&j>=20&&j<=40)
 {
    if(i==2&&(j>=25&&j<=33))
    printf("\b*");
    if(i==7&&(j>=25&&j<=33))
    printf("\b*");
    if(j==25&&(i>=2&&i<=7))
    printf("\b*");
    if(j==33&&(i>=2&&i<=7))
    printf("\b*");

 }
}

 void zero3rd()
{

 if(i>=0&&i<=8&&j>=40&&j<=60)
 {
    if(i==2&&(j>=45&&j<=53))
    printf("\b*");
    if(i==7&&(j>=45&&j<=53))
    printf("\b*");
    if(j==45&&(i>=2&&i<=7))
    printf("\b*");
    if(j==53&&(i>=2&&i<=7))
    printf("\b*");

 }
}
 void zero4th()
{

 if(i>=8&&i<=16&&j>=0&&j<=20)
 {
    if(i==10&&(j>=5&&j<=13))
    printf("\b*");
    if(i==15&&(j>=5&&j<=13))
    printf("\b*");
    if(j==5&&(i>=10&&i<=15))
    printf("\b*");
    if(j==13&&(i>=10&&i<=15))
    printf("\b*");

 }
}
 void zero5th()
{

 if(i>=8&&i<=16&&j>=20&&j<=40)
 {
    if(i==10&&(j>=25&&j<=33))
    printf("\b*");
    if(i==15&&(j>=25&&j<=33))
    printf("\b*");
    if(j==25&&(i>=10&&i<=15))
    printf("\b*");
    if(j==33&&(i>=10&&i<=15))
    printf("\b*");

 }
}
void zero6th()
{

 if(i>=8&&i<=16&&j>=40&&j<=60)
 {
    if(i==10&&(j>=45&&j<=53))
    printf("\b*");
    if(i==15&&(j>=45&&j<=53))
    printf("\b*");
    if(j==45&&(i>=10&&i<=15))
    printf("\b*");
    if(j==53&&(i>=10&&i<=15))
    printf("\b*");

 }
}
void zero7th()
{

 if(i>=16&&i<=24&&j>=0&&j<=20)
 {
    if(i==18&&(j>=5&&j<=13))
    printf("\b*");
    if(i==23&&(j>=5&&j<=13))
    printf("\b*");
    if(j==5&&(i>=18&&i<=23))
    printf("\b*");
    if(j==13&&(i>=18&&i<=23))
    printf("\b*");

 }
}
void zero8th()
{

 if(i>=16&&i<=24&&j>=20&&j<=40)
 {
    if(i==18&&(j>=25&&j<=33))
    printf("\b*");
    if(i==23&&(j>=25&&j<=33))
    printf("\b*");
    if(j==25&&(i>=18&&i<=23))
    printf("\b*");
    if(j==33&&(i>=18&&i<=23))
    printf("\b*");

 }
}
void zero9th()
{

 if(i>=16&&i<=24&&j>=40&&j<=60)
 {
    if(i==18&&(j>=45&&j<=53))
    printf("\b*");
    if(i==23&&(j>=5&&j<=13))
    printf("\b*");
    if(j==45&&(i>=18&&i<=23))
    printf("\b*");
    if(j==53&&(i>=18&&i<=23))
    printf("\b*");

 }
}


void cross1st()
{
 int loc1=i,loc2=j;

 if(loc1<=8&&loc2<=20)
 {
 if(loc1+6==loc2)
 {
 printf("\b*");
 }
 if(b1<=4)
 {
 b1=13;
 }
 if(loc2==b1)
 {
 printf("\b*");
 b1--;
 }
 }

}
void cross2nd()
{

 if(i<=8&&j>=20&&j<=40)
 {
 if(i+26==j)
 {
 printf("\b*");
 }
 if(b2<=24)
 {
 b2=33;
 }
 if(j==b2)
 {
 printf("\b*");
 b2--;
 }

 }

}
void cross3rd()
{


 if(i<=8&&j>=40&&j<=60)
 {
 if(i+46==j)
 {
 printf("\b*");
 }
 if(b3<=44)
 {
 b3=53;
 }
 if(j==b3)
 {
 printf("\b*");
 b3--;
 }

 }
}
void cross4th()
{

 if(i>=8&&i<=16&&j>=0&&j<=20)
 {
 if(i+6==j+9)
 {
 printf("\b*");
 }
 if(b4<=3)
 {
 b4=13;
 }
 if(j==b4)
 {
 printf("\b*");
 b4--;
 }

 }
}
void cross5th()
{

 if(i>=8&&i<=16&&j>=20&&j<=40)
 {
 if(i+26==j+9)
 {
 printf("\b*");
 }
 if(b5<=23)
 {
 b5=33;
 }
 if(j==b5)
 {
 printf("\b*");
 b5--;
 }

 }
}
void cross6th()
{

 if(i>=8&&i<=16&&j>=40&&j<=60)
 {
 if(i+46==j+9)
 {
 printf("\b*");
 }
 if(b6<=43)
 {
 b6=53;
 }
 if(j==b6)
 {
 printf("\b*");
 b6--;
 }

 }
 }
 void cross7th()
{

 if(i>=16&&i<=24&&j>=0&&j<=20)
 {
 if(i+6==j+17)
 {
 printf("\b*");
 }
 if(b7<=3)
 {
 b7=13;
 }
 if(j==b7)
 {
 printf("\b*");
 b7--;
 }

 }
}
 void cross8th()
{

 if(i>=16&&i<=24&&j>=20&&j<=40)
 {
 if(i+26==j+17)
 {
 printf("\b*");
 }
 if(b8<=23)
 {
 b8=33;
 }
 if(j==b8)
 {
 printf("\b*");
 b8--;
 }

 }
}
 void cross9th()
{

 if(i>=16&&i<=24&&j>=40&&j<=60)
 {
 if(i+46==j+17)
 {
 printf("\b*");
 }
 if(b9<=43)
 {
 b9=53;
 }
 if(j==b9)
 {
 printf("\b*");
 b9--;
 }

 }
}
void rishabh()
{
 int a;
 delay(1000);
 clrscr();
 printf("\n\n\t\t") ;
 puts(player);
 delay(2000);
 printf("\n\n") ;
 for(a=0;a<=strlen(author);a++)
 {
   delay(500);
   printf("%c",author[a]);
 }

}
void checkx()
{
int a=0;
 if(cross[0]==2&&cross[1]==2&&cross[2]==2)
{
 strcpy(player,"PLAYER 1 ")  ;
 rishabh();
 }
 if(cross[3]==2&&cross[4]==2&&cross[5]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
 rishabh();
 }
 if(cross[6]==2&&cross[7]==2&&cross[8]==2)
 {
 strcpy(player,"PLAYER 1 WINS")  ;
 rishabh();
 }
 if(cross[0]==2&&cross[4]==2&&cross[8]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
 rishabh();
 }
 if(cross[2]==2&&cross[4]==2&&cross[6]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
 rishabh();
 }
 if(cross[0]==2&&cross[3]==2&&cross[6]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
 rishabh();
 }
 if(cross[1]==2&&cross[4]==2&&cross[7]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
 rishabh();
 }
 if(cross[2]==2&&cross[5]==2&&cross[8]==2)
 {
 strcpy(player,"PLAYER 1 WINS ")  ;
  rishabh();
  }
}
void checkzero()
{
 if(zero[0]==2&&zero[1]==2&&zero[2]==2)
{
  strcpy(player,"PLAYER 2 WINS ")  ;
  rishabh();
  }
 if(zero[3]==2&&zero[4]==2&&zero[5]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[6]==2&&zero[7]==2&&zero[8]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[0]==2&&zero[3]==2&&zero[6]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[1]==2&&zero[4]==2&&zero[7]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[2]==2&&zero[5]==2&&zero[8]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[0]==2&&zero[4]==2&&zero[8]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
 if(zero[2]==2&&zero[4]==2&&zero[6]==2)
 {
 strcpy(player,"PLAYER 2 WINS ")  ;
 rishabh();
 }
}

void select()
{

 if(i==4&&j==10&&cursor[0]==1)
 printf("\bX");
 if(i==4&j==30&&cursor[1]==1)
 printf("\bX");
 if(i==4&&j==50&&cursor[2]==1)
 printf("\bX");
 if(i==12&&j==10&&cursor[3]==1)
 printf("\bX");
 if(i==12&&j==30&&cursor[4]==1)
 printf("\bX");
 if(i==12&&j==50&&cursor[5]==1)
 printf("\bX");
 if(i==20&&j==10&&cursor[6]==1)
 printf("\bX");
 if(i==20&&j==30&&cursor[7]==1)
 printf("\bX");
 if(i==20&&j==50&&cursor[8]==1)
 printf("\bX");


}

void pat()
{
clrscr();
for(i=1;i<=24;i++)
{
for(j=1;j<=60;j++)
{
if(j==20||j==40||i==8||i==16)
printf("*");

else
printf(" ");
select();

if(cross[0]!=0)
{
cross1st();
cross[0]=2;
}
if(cross[1]!=0)
{
cross2nd();
cross[1]=2;

}
if(cross[2]!=0)
{
cross3rd();
cross[2]=2;
}
if(cross[3]!=0)
{
cross4th();
cross[3]=2;
}
if(cross[4]!=0)
{
cross5th();
cross[4]=2;

}
if(cross[5]!=0)
{
cross6th();
cross[5]=2;
}
if(cross[6]!=0)
{
cross7th();
cross[6]=2;
}
if(cross[7]!=0)
{
cross8th();
cross[7]=2;
}
if(cross[8]!=0)
{
cross9th();
cross[8]=2;
}
if(zero[0]!=0)
{
zero1st();
zero[0]=2;
}
if(zero[1]!=0)
{
zero2nd();
zero[1]=2;

}
if(zero[2]!=0)
{
zero3rd();
zero[2]=2;
}
if(zero[3]!=0)
{
zero4th();
zero[3]=2;
}
if(zero[4]!=0)
{
zero5th();
zero[4]=2;

}
if(zero[5]!=0)
{
zero6th();
zero[5]=2;
}
if(zero[6]!=0)
{
zero7th();
zero[6]=2;
}
if(zero[7]!=0)
{
zero8th();
zero[7]=2;
}
if(zero[8]!=0)
{
zero9th();
zero[8]=2;
}
}
printf("\n");
}
checkx();
checkzero();
printf("STATUS : \t\t");
puts(player);
input();
}

void main()
{
clrscr();
pat();
getch();
}
