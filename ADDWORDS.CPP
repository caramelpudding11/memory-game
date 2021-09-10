#include<iostream.h>
#include<conio.h>
#include<fstream.h>

struct newwords
{
char word[20];
};
void main()
{
newwords ws;
ofstream f1("words1.dat",ios::binary|ios::app);
if(!f1)
{
cout<<"error";
return;
}
int n;
cout<<"Enter number of words to insert \n";
cin>>n;
cout<<"Enter words to insert\n";
for(int i=0;i<n;i++)
{cin>>ws.word;
f1.write((char*)&ws,sizeof(ws));
}
f1.close();
}