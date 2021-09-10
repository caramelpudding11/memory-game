#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<fstream.h>
#include<time.h>
#include<string.h>


int y1=1,y2=1,y3=1;
class timetaken
{
public:
int h,m,s;
int tinsec;
};

class scoreclass:public timetaken
{
char name[30];
int sc;
public:
scoreclass()
{
sc=0;
h=m=s=0;
tinsec=0;
}

//       READS NAME

void read()
{
gotoxy(45,13);
gets(name);
}

int retsc()
{
return sc;
}

void addsc()
{
sc+=25;
}

//       DISPLAYS NAME, SCORE AND TIME TAKEN

void disp()
{
gotoxy(1,y1+=2);
cout<<name;
gotoxy(19,y2+=2);
cout<<sc;
gotoxy(38,y3+=2);
cout<<h<<":"<<m<<":"<<s;

}

}score;

void ingraph()
{
int driver=DETECT,mode;
initgraph(&driver,&mode,"C:\\turboc3\\bgi");
setbkcolor(BLACK);
}

//      DISPLAYS BOX AND BOX NUMBERS

void boxnos()
{
for (int i=200;i<400;i+=50)
for (int j=100;j<300;j+=50)
{
setcolor(BLUE);
setlinestyle(0,1,3);
rectangle(i,j,400,300);
settextstyle(1,0,3) ;
outtextxy(i,j," ");
setcolor(WHITE);
settextstyle(2,0,5);
}
outtextxy(210,70," 0 ");
outtextxy(260,70," 4 ");
outtextxy(310,70," 8 ");
outtextxy(360,70," 12 ");
outtextxy(180,115," 0  ");
outtextxy(180,165," 1  ");
outtextxy(180,215," 2  ");
outtextxy(180,265," 3  ");
outtextxy(210,320," 3 ");
outtextxy(260,320," 7 ");
outtextxy(310,320," 11 ");
outtextxy(360,320," 15 ");
}

//       DISPLAYS NUMBER IN BOX

void openbox(int ranpos[],int b)
{
char posstring1[5]=" ",posstring2[5],posstring3[5],posstring4[5],posstring5[5],posstring6[5],posstring7[5],posstring8[5],posstring9[5],posstring10[5],posstring11[5],posstring12[5],posstring13[5],posstring14[5],posstring15[5],posstring16[5];
gotoxy(15,24);
cout<<"                       ";
   settextstyle(2,0,5);
   for (int i=200;i<400;i+=50)
    {
    settextstyle(2,0,5);
   for (int j=100;j<300;j+=50)
    {
    setcolor(WHITE);
       if ((i==200 && j==100) && b==0 )
       {
	 ltoa(ranpos[0],posstring1,10);
	 outtextxy(i+20,j+20,posstring1);
       }
       if ((i==200 && j==150) && b==1 )
       {
	 ltoa(ranpos[1],posstring2,10);
	 outtextxy(i+20,j+20,posstring2);
       }
       if ((i==200 && j==200) &&  b==2)
       {
	 ltoa(ranpos[2],posstring3,10);
	 outtextxy(i+20,j+20,posstring3);
       }
       if ((i==200 && j==250) && b==3)
       {
	 ltoa(ranpos[3],posstring4,10);
	 outtextxy(i+20,j+20,posstring4);
       }
       if ((i==250 && j==100) && b==4)
       {
	 ltoa(ranpos[4],posstring5,10);
	 outtextxy(i+20,j+20,posstring5);
       }
       if ((i==250 && j==150) && b==5)
       {
	 ltoa(ranpos[5],posstring6,10);
	 outtextxy(i+20,j+20,posstring6);
       }
       if ((i==250 && j==200) && b==6)
       {
	 ltoa(ranpos[6],posstring7,10);
	 outtextxy(i+20,j+20,posstring7);
       }
       if ((i==250 && j==250) && b==7)
       {
       ltoa(ranpos[7],posstring8,10);
       outtextxy(i+20,j+20,posstring8);
       }
       if ((i==300 && j==100) && b==8)
       {
       ltoa(ranpos[8],posstring9,10);
       outtextxy(i+20,j+20,posstring9);
       }
       if ((i==300 && j==150) && b==9)
       {
       ltoa(ranpos[9],posstring10,10);
       outtextxy(i+20,j+20,posstring10);
       }
       if ((i==300 && j==200) && b==10)
       {
       ltoa(ranpos[10],posstring11,10);
       outtextxy(i+20,j+20,posstring11);
       }
       if ((i==300 && j==250) && b==11)
       {
       ltoa(ranpos[11],posstring12,10);
       outtextxy(i+20,j+20,posstring12);
       }
       if ((i==350 && j==100) && b==12)
       {
       ltoa(ranpos[12],posstring13,10);
       outtextxy(i+20,j+20,posstring13);
       }
       if ((i==350 && j==150) && b==13)
       {
       ltoa(ranpos[13],posstring14,10);
       outtextxy(i+20,j+20,posstring14);
       }
       if ((i==350 && j==200) && b==14)
       {
       ltoa(ranpos[14],posstring15,10);
       outtextxy(i+20,j+20,posstring15);
	}
	if ((i==350 && j==250) && b==15)
	{
	   ltoa(ranpos[15],posstring16,10);
	   outtextxy(i+20,j+20,posstring16);
	}
    }
    }
}

//      GENERATES RANDOM NUMBERS AND RANDOM POSITIONS FOR BOXES

void randgen1(int num[8],int ranpos[16])
{
randomize();
int z=0;
static int flagarr1[20];
for (int i=0;i<8;i++)
{
r:num[i]=random(100);
flagarr1[z++]=num[i];
for(int j=0;j<i;j++)
if(flagarr1[j]==num[i])
goto r;
}

for (int x=0;x<16;x++)
  ranpos[x]=1;
int k;
int l;
int ct=0;

for(i=0;i<16;i++)
  {
    for(l=0;l<8;l++)
     {
       ct=0;
       for(int j=0;j<2;j++)
	{
	  again:
	  k=random(16);
	  if (ct==32)
	   return;
	  if (ranpos[k]==1)
	   ranpos[k]=num[l];
	  else
	  {
	   ct++;
	   goto again;
	  }
	}
     }
  }
}

//      FINDS DIFFERENCE BETWEEN FINAL AND INITIAL TIME

void difftime(int si,int sf,int mi,int mf,int hi,int hf)
{
int ds,dm,dh;
if(si>sf)
{
mf--;
sf+=60;
}
ds=sf-si;
if(mi>mf)
{
hf--;
mf+=60;
}
dm=mf-mi;
dh=hf-hi;
score.h=dh;
score.m=dm;
score.s=ds;
score.tinsec=dh*3600+dm*60+ds;
cout<<"Time taken is  "<<dh<<" : "<<dm<<" : "<<ds;
}

void scsortfn(scoreclass scorearr[10],int noofrecs)
{
ifstream f2("scoremem.dat",ios::binary);
if(!f2)
{
cout<<"fail 2";
return;
}

scoreclass temp;

for(int i=0;i<noofrecs;i++)
{
for(int j=0;j<noofrecs-i-1;j++)
{
if(scorearr[j].retsc()<scorearr[j+1].retsc())
{
temp=scorearr[j];
scorearr[j]=scorearr[j+1];
scorearr[j+1]=temp;
}
}
}
f2.close();

}

void timesortfn(scoreclass scorearr[10],scoreclass scorearr1[10],int noofrecs=0)
{
ifstream f2("scoremem.dat",ios::binary);
if(!f2)
{
cout<<"fail 2";
return;
}

clrscr();
cout<<"Name\t\t  Score\t\t      Time";
scoreclass temp,scorearr2[10];

int indof1=0;
for(int k=0;k<noofrecs;k++)
{

  if(scorearr[k+1].retsc()<scorearr[k].retsc())
	 scorearr1[indof1++]=scorearr[k];
  else
   {
    int noofscrecs=1;
    scorearr2[0]=scorearr[k];

    while(scorearr[k+1].retsc()==scorearr[k].retsc())
      {
      scorearr2[noofscrecs++] = scorearr[k+1];
      k++;
      }
      for(int m=0;m<noofscrecs-1;m++)
      {
	 for(int j=0;j<noofscrecs-m-1;j++)
	 {
	   if(scorearr2[j].tinsec>scorearr2[j+1].tinsec)
	   {
	     temp=scorearr2[j];
	     scorearr2[j]=scorearr2[j+1];
	     scorearr2[j+1]=temp;
	   }
	 }
      }

      for (int j = 0; j<noofscrecs; j++)
      scorearr1[indof1++] = scorearr2[j];
    }

}


for(int i=0;i<noofrecs;i++)
scorearr1[i].disp();
f2.close();


}


struct newwords
{
char word[20];
};

//     DRAWS THE HANGMAN

void drawman(int lives)
{
switch(lives)
{
case 7:line(412,160,440,160);break;
case 6:line(440,160,440,183);break;
case 5:circle(440,200,15);break;
case 4:line(440,215,440,265);break;
case 3:line(440,225,425,250);break;
case 2:line(440,225,455,250);break;
case 1:line(440,265,425,285);break;
case 0:line(440,265,455,285);break;
}
}

//       GENERATES RANDOM WORD FROM FILE

int randgen2()
{
int x;
static int index=0;
static int flagarr[20];
randomize();
r:x=random(5);
for(int i=0;i<index;i++)
if(flagarr[i]==x)
goto r;
flagarr[index++]=x;
return x;
}

//       HANGMAN GAME

void hangman(int x)
{
newwords ws;
fstream f1("words1.dat",ios::binary|ios::in);
if(!f1)
{
cout<<"error";
return;
}

//       GETS RANDOM WORD FROM FILE

f1.seekg((x)*sizeof(ws),ios::beg);
f1.read((char*)&ws,sizeof(ws));
int size=strlen(ws.word);
for(int i=0;i<size;i++)
cout<<"_ ";
cout<<endl;

int fl[20],win=0;
int lives=8;
for(i=0;i<size;i++)
fl[i]=0;
char l;
cout<<"\nEnter letters of your choice  ";
while(win<size)
 {
    cout<<endl;
    gotoxy(30,3);
    cin>>l;

    int notwrong=0;
    for(i=0;i<size;i++)
     {
      if(l==ws.word[i])
       {
	 fl[i]=1;
	 win++;
	 notwrong=1;
       }
     }

    for(int j=0;j<size;j++)
       if(fl[j]==1)
	 cout<<ws.word[j]<<" ";
       else if(fl[j]!=1)
	 cout<<"_ ";
	 cout<<endl;

     if(notwrong==0)
     {
       lives--;
       cout<<lives<<" lives left   \n";
       drawman(lives);
     }


    if(lives==0)
      {
       cout<<"\n you lose";
       getch();
       break;
      }
 }
if(win==size)
cout<<"\n you win";
getch();
f1.close();
}



void main()
{
//        WELCOME SCREEN

int gch;
ingraph();
settextstyle(0,0,7);
setcolor(11);
outtextxy(25,100,"WELCOME TO");
outtextxy(0,170,"GAME WORLD");
settextstyle(0,0,1);
settextstyle(0,0,2);
setcolor(LIGHTGREEN+BLINK);
outtextxy(190,320,"Enter to start");
getch();
textcolor(BLACK);

do
{
clrscr();
settextstyle(0,0,4);
setcolor(LIGHTRED);

//       GAME OPTION SCREEN

outtextxy(250,75,"GAMES");
settextstyle(0,0,2);
setcolor(DARKGRAY);
outtextxy(175,150,"1.NUMBER MEMORY GAME");
outtextxy(175,210,"2.HANGMAN");
outtextxy(175,270,"3.EXIT");
gotoxy(195,260);
cout<<"Your option ";
cin>>gch;
clrscr();
ingraph();
settextstyle(0,0,0);
setbkcolor(BLACK);

//       MEMORY GAME

if(gch==1)
{
outtextxy(150,150,"This is a number based memory game");
outtextxy(150,160," Enter a box number to open a box");
outtextxy(150,170," The boxes are arranged from 0-15 ");
outtextxy(150,180,"  coloumn wise.The objective of");
outtextxy(150,190," the game is to match the pairs");
setcolor(LIGHTGREEN);
settextstyle(0,0,1);
outtextxy(150,230,"Press enter when you are ready");

getch();

clrscr();
ingraph();
settextstyle(0,0,2);
outtextxy(160,180,"Enter name: ");
score.read();

ofstream f1("scoremem.dat",ios::app|ios::binary);
if(!f1)
{
cout<<"fail";
return;
}


ingraph();
struct  tm *ti;
 tm ti1;
 char *t1;
 int mi,si,mf,sf,hi,hf;

//       FINDS INITIAL TIME

time_t tt;
time(&tt);
ti=localtime(&tt);
ti1=*ti;
t1=asctime(ti);
hi=ti1.tm_hour;
mi=ti1.tm_min;
si=ti1.tm_sec;

boxnos();

setcolor(LIGHTMAGENTA);
settextstyle(0,0,4);
outtextxy(150,10,"MEMORY GAME");

int num[8],ranpos[16];
randgen1(num,ranpos);
settextstyle(2,0,5);

//         CHECK IF WON

int boxno1=0,boxno2=0;
int flagarr[16];
for(int h=0;h<16;h++)
flagarr[h]=0;
int solve=1;
while(boxno1<16 && boxno1>=0 && boxno2<16 && boxno2>=0)
{
   for (int win=0;win<=16;win++)
   {
   if (win==16)
     {
       clrscr();
       ingraph();
       sound(1000);
       delay(500);
       nosound();
       outtextxy(250,180,"YOU WIN");
       time(&tt);
ti=localtime(&tt);
ti1=*ti;
t1=asctime(ti);
hf=ti1.tm_hour;
mf=ti1.tm_min;
sf=ti1.tm_sec;
difftime(si,sf,mi,mf,hi,hf);
       solve=1;
       goto gameover;
     }
   else if (flagarr[win]==0)
    {
    solve=0;
    break;
    }
   }


if (solve==0)
{  gotoxy(15,22);
   cout<<" Enter box number 1 (0-15) and any other number to quit ";
   cin>>boxno1;
   if (boxno1>15 || boxno2<0)
   {
   clrscr();
   ingraph();
   sound(1000);
   delay(500);
   nosound();
   settextstyle(0,0,1);
   outtextxy(250,180,"YOU LOSE");
   time(&tt);
ti=localtime(&tt);
ti1=*ti;
t1=asctime(ti);
hf=ti1.tm_hour;
mf=ti1.tm_min;
sf=ti1.tm_sec;
difftime(si,sf,mi,mf,hi,hf);
   break;
   }
   else if (flagarr[boxno1]==1)
   {
   gotoxy(15,24);
   cout<<"Box is already open";
   cin>>boxno1;
   }
    openbox(ranpos,boxno1);

gotoxy(15,23);
cout<<" Enter box number 2 (0-15) and any other number to quit ";
cin>>boxno2;

if (boxno2>15 || boxno2<0)
{
clrscr();
   ingraph();
   sound(1000);
   delay(500);
   nosound();
   settextstyle(0,0,1);
   outtextxy(250,180,"YOU LOSE");
   time(&tt);
ti=localtime(&tt);
ti1=*ti;
t1=asctime(ti);
cout<<"Time is  "<<t1;
hf=ti1.tm_hour;
mf=ti1.tm_min;
sf=ti1.tm_sec;
difftime(si,sf,mi,mf,hi,hf);
break;
}
else if (flagarr[boxno2]==1 || boxno1==boxno2)
   {
   gotoxy(15,24);
   cout<<"Box is already open";
   cin>>boxno2;
   }
   openbox(ranpos,boxno2);

if (ranpos[boxno1]==ranpos[boxno2])
{
score.addsc();
flagarr[boxno1]=1;
flagarr[boxno2]=1;
}
else
{
flagarr[boxno1]=0;
flagarr[boxno2]=0;
setcolor(BLACK);

delay(800);

//        CLOSING BOX IF WRONG


if (flagarr[boxno1]!=1 && flagarr[boxno2]!=1)
{
settextstyle(0,0,9);
if(boxno1==0 || boxno2==0)
outtextxy(200,75,".");
if(boxno1==1 || boxno2==1)
outtextxy(200,125,".");
if(boxno1==2 || boxno2==2)
outtextxy(200,175,".");
if(boxno1==3 || boxno2==3)
outtextxy(200,225,".");
if(boxno1==4 || boxno2==4)
outtextxy(250,75,".");
if(boxno1==5 || boxno2==5)
outtextxy(250,125,".");
if(boxno1==6 || boxno2==6)
outtextxy(250,175,".");
if(boxno1==7 || boxno2==7)
outtextxy(250,225,".");
if(boxno1==8 || boxno2==8)
outtextxy(300,75,".");
if(boxno1==9 || boxno2==9)
outtextxy(300,125,".");
if(boxno1==10 || boxno2==10)
outtextxy(300,175,".");
if(boxno1==11 || boxno2==11)
outtextxy(300,225,".");
if(boxno1==12 || boxno2==12)
outtextxy(350,75,".");
if(boxno1==13 || boxno2==13)
outtextxy(350,125,".");
if(boxno1==14 || boxno2==14)
outtextxy(350,175,".");
if(boxno1==15 || boxno2==15)
outtextxy(350,225,".");
}
}
    }
    }
gameover: getch();

//       PUTS SCORES INTO FILE

f1.write((char*)&score,sizeof(score));
f1.close();

ifstream f2("scoremem.dat",ios::binary);
if(!f2)
{
cout<<"fail 2";
return;
}

//       SCORE CARD

//      SORTING BY SCORE
scoreclass scorearr[10],scorearr1[10],scorearr2[10];

int noofrecs=0;
while(f2.read((char*)&scorearr[noofrecs],sizeof(scorearr[noofrecs])))
noofrecs++;

scsortfn(scorearr,noofrecs);

//     SORTING BY TIME

timesortfn(scorearr,scorearr1,noofrecs);

getch();
}

//       HANGMAN

if(gch==2)
{
outtextxy(150,150,"This is a game of hangman");
outtextxy(150,160," You have 8 lives initially");
setcolor(LIGHTGREEN);
settextstyle(0,0,1);
outtextxy(150,180,"Press enter when you are ready");

getch();

newwords ws;
clrscr();
int ch;
ingraph();

int x=randgen2();
hangman(x);
cout<<endl;
}
}while(gch!=3);
getch();
}

