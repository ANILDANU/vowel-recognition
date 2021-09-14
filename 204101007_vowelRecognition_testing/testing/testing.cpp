// testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "fstream"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int choice,vo=5,file=10;
	cout<<"Enter choice"<<endl;
	cout<<"1. test using recording module"<<endl;
	cout<<"2. test on included input file"<<endl;
	cin>>choice;
	if(choice==1)
	{
		vo=1;
		file=1;
	}
ifstream fin;
ofstream f;
int i,j,p=12,l=0;
long double n,sum=0,dc,dis[]={0,0,0,0,0},dif=0,md=0,tw[]={1,3,7,13,19,22,25,33,42,50,56,61};
long double r[13],s[320],e[13],al[13][13],k[13],a[13],c[5][13],av[5][13],rec,voweldis[]={0,0,0,0,0};
fin.open("silence.txt");
fin>>n;
if(fin.fail())
{
cout<<"error";
exit(1);
}
while(!fin.eof())
{
sum=sum+n;
fin>>n;
l++;
}
dc=sum/l;
fin.close();
for(int vowel=0;vowel<vo;vowel++)
{
	for(int y=0;y<5;y++)
	{
		for(int z=1;z<=12;z++)
			av[y][z]=0;
	}
	fin.close();
	for(int num=0;num<file;num++)
	{
		fin.close();
		if(choice==1)
		{
		system("Recording_Module.exe 3 input_file.wav input_file.txt");
		fin.open("input_file.txt");
		}
		else{
		if(vowel==0 && num==0)
		fin.open("204101007_a_11.txt");
		if(vowel==0 && num==1)
		fin.open("204101007_a_12.txt");
		if(vowel==0 && num==2)
		fin.open("204101007_a_13.txt");
		if(vowel==0 && num==3)
		fin.open("204101007_a_14.txt");
		if(vowel==0 && num==4)
		fin.open("204101007_a_15.txt");
		if(vowel==0 && num==5)
		fin.open("204101007_a_16.txt");
		if(vowel==0 && num==6)
		fin.open("204101007_a_17.txt");
		if(vowel==0 && num==7)
		fin.open("204101007_a_18.txt");
		if(vowel==0 && num==8)
		fin.open("204101007_a_19.txt");
		if(vowel==0 && num==9)
		fin.open("204101007_a_20.txt");
		if(vowel==1 && num==0)
		fin.open("204101007_e_11.txt");
		if(vowel==1 && num==1)
		fin.open("204101007_e_12.txt");
		if(vowel==1 && num==2)
		fin.open("204101007_e_13.txt");
		if(vowel==1 && num==3)
		fin.open("204101007_e_14.txt");
		if(vowel==1 && num==4)
		fin.open("204101007_e_15.txt");
		if(vowel==1 && num==5)
		fin.open("204101007_e_16.txt");
		if(vowel==1 && num==6)
		fin.open("204101007_e_17.txt");
		if(vowel==1 && num==7)
		fin.open("204101007_e_18.txt");
		if(vowel==1 && num==8)
		fin.open("204101007_e_19.txt");
		if(vowel==1 && num==9)
		fin.open("204101007_e_20.txt");
		if(vowel==2 && num==0)
		fin.open("204101007_i_11.txt");
		if(vowel==2 && num==1)
		fin.open("204101007_i_12.txt");
		if(vowel==2 && num==2)
		fin.open("204101007_i_13.txt");
		if(vowel==2 && num==3)
		fin.open("204101007_i_14.txt");
		if(vowel==2 && num==4)
		fin.open("204101007_i_15.txt");
		if(vowel==2 && num==5)
		fin.open("204101007_i_16.txt");
		if(vowel==2 && num==6)
		fin.open("204101007_i_17.txt");
		if(vowel==2 && num==7)
		fin.open("204101007_i_18.txt");
		if(vowel==2 && num==8)
		fin.open("204101007_i_19.txt");
		if(vowel==2 && num==9)
		fin.open("204101007_i_20.txt");
		if(vowel==3 && num==0)
		fin.open("204101007_o_11.txt");
		if(vowel==3 && num==1)
		fin.open("204101007_o_12.txt");
		if(vowel==3 && num==2)
		fin.open("204101007_o_13.txt");
		if(vowel==3 && num==3)
		fin.open("204101007_o_14.txt");
		if(vowel==3 && num==4)
		fin.open("204101007_o_15.txt");
		if(vowel==3 && num==5)
		fin.open("204101007_o_16.txt");
		if(vowel==3 && num==6)
		fin.open("204101007_o_17.txt");
		if(vowel==3 && num==7)
		fin.open("204101007_o_18.txt");
		if(vowel==3 && num==8)
		fin.open("204101007_o_19.txt");
		if(vowel==3 && num==9)
		fin.open("204101007_o_20.txt");
		if(vowel==4 && num==0)
		fin.open("204101007_u_11.txt");
		if(vowel==4 && num==1)
		fin.open("204101007_u_12.txt");
		if(vowel==4 && num==2)
		fin.open("204101007_u_13.txt");
		if(vowel==4 && num==3)
		fin.open("204101007_u_14.txt");
		if(vowel==4 && num==4)
		fin.open("204101007_u_15.txt");
		if(vowel==4 && num==5)
		fin.open("204101007_u_16.txt");
		if(vowel==4 && num==6)
		fin.open("204101007_u_17.txt");
		if(vowel==4 && num==7)
		fin.open("204101007_u_18.txt");
		if(vowel==4 && num==8)
		fin.open("204101007_u_19.txt");
		if(vowel==4 && num==9)
		fin.open("204101007_u_20.txt");
		}
long double ds[100000];
i=0;
int fr=0;
if(fin.fail())
	cout<<"error";
while(!fin.eof())
{
	fin>>n;
	ds[i]=n;
	i++;
	fr++;
}
int p=0;
fin.close();
f.open("input.txt");
while(p<i)
{
	f<<ds[p]-dc<<endl;
	p++;
}
f.close();
fin.open("input.txt");
long double max=0;
while(!fin.eof())
{
	fin>>n;
	if(max<n)
		max=n;
}
long double ratio=10000/max;
fin.close();
f.open("input.txt");
p=0;
while(p<i)
{
	f<<ds[p]*ratio<<endl;
	p++;
}
f.close();
fin.open("input.txt");
	fr=fr/320;
	if(fr%2==0)
		fr=fr+1;
	fr=fr/2;
	fr=fr-2;
	fr=fr*320;
	for(int x=0;x<fr;x++)
		fin>>n;
	for(int x=0;x<5;x++)
	{
	for(i=0;i<320;i++)
	{
		s[i]=n;
		fin>>n;
	}
	for(i=0;i<=12;i++)
	{
		r[i]=0;
		for(j=0;j<=319-i;j++)
			r[i]=r[i]+s[j]*s[j+i];
	}
	e[0]=r[0];
	for(i=1;i<=12;i++)
	{
		k[i]=r[i];
		for(j=1;j<=i-1;j++) 
			k[i]=k[i]-al[j][i-1]*r[i-j];
		k[i]=k[i]/e[i-1];
		for(j=1;j<=i;j++)
		{
			if(i==j)
			al[j][i]=k[i];
			else
				al[j][i]=al[j][i-1]-k[i]*al[i-j][i-1];
		}
		e[i]=(1-k[i]*k[i])*e[i-1];
	}
	for(i=1;i<=12;i++)
		a[i]=al[i][12];

	//computing the value of Ci
	for(i=1;i<=12;i++)
	{
		c[x][i]=a[i];
		for(j=1;j<=i-1;j++)
			c[x][i]=c[x][i]+j*c[x][j]*a[i-j]/i;
	}
	long double W[13];
	for(i=1;i<=12;i++)
	{
		W[i]=1+6*sin(3.14*i/12);          //raised sin window
		c[x][i]=c[x][i]*W[i];
	}
	}
	fin.close();
	fin.open("ci_a.txt");
		fin>>n;
	for(int x=0;x<5;x++)
	{
		dis[x]=0;
		for(int q=1;q<=12;q++)
		{
			dif=c[x][q]-n;
			dif=dif*dif;
			dif=dif*tw[q-1];
			dis[x]=dis[x]+dif;
			fin>>n;
		}
		if(x==0)
		voweldis[0]=dis[x];
		if(voweldis[0]>dis[x])
			voweldis[0]=dis[x];
	}
	fin.close();
	fin.open("ci_e.txt");
	fin>>n;
	for(int x=0;x<5;x++)
	{
		dis[x]=0;
		for(int q=1;q<=12;q++)
		{
			dif=c[x][q]-n;
			dif=dif*dif;
			dif=dif*tw[q-1];
			dis[x]=dis[x]+dif;
			fin>>n;
		}
		if(x==0)
		voweldis[1]=dis[x];
		if(voweldis[1]>dis[x])
			voweldis[1]=dis[x];
	}
	fin.close();
		fin.open("ci_i.txt");
	fin>>n;
	for(int x=0;x<5;x++)
	{
		dis[x]=0;
		for(int q=1;q<=12;q++)
		{
			dif=c[x][q]-n;
			dif=dif*dif;
			dif=dif*tw[q-1];
			dis[x]=dis[x]+dif;
			fin>>n;
		}
		if(x==0)
		voweldis[2]=dis[x];
		if(voweldis[2]>dis[x])
			voweldis[2]=dis[x];
	}
	fin.close();
		fin.open("ci_o.txt");
	fin>>n;
	for(int x=0;x<5;x++)
	{
		dis[x]=0;
		for(int q=1;q<=12;q++)
		{
			dif=c[x][q]-n;
			dif=dif*dif;
			dif=dif*tw[q-1];
			dis[x]=dis[x]+dif;
			fin>>n;
		}
		if(x==0)
		voweldis[3]=dis[x];
		if(voweldis[3]>dis[x])
			voweldis[3]=dis[x];
	}
	fin.close();
	fin.open("ci_u.txt");
	fin>>n;
	for(int x=0;x<5;x++)
	{
		dis[x]=0;
		for(int q=1;q<=12;q++)
		{
			dif=c[x][q]-n;
			dif=dif*dif;
			dif=dif*tw[q-1];
			dis[x]=dis[x]+dif;
			fin>>n;
		}
		if(x==0)
		voweldis[4]=dis[x];
		if(voweldis[4]>dis[x])
			voweldis[4]=dis[x];
	}
	fin.close();
	rec=0;
	md=voweldis[0];
	if(vowel==0 && choice!=1)
		cout<<endl<<"Actual vowel is a"<<endl;
	if(vowel==1 &&choice!=1)
		cout<<endl<<"Actual vowel is e"<<endl;
	if(vowel==2&&choice!=1)
		cout<<endl<<"Actual vowel is i"<<endl;
	if(vowel==3&&choice!=1)
		cout<<endl<<"Actual vowel is o"<<endl;
	if(vowel==4&&choice!=1)
		cout<<endl<<"Actual vowel is u"<<endl;
	for(int i=1;i<5;i++)
	{
	    if(md>voweldis[i])
			{
				rec=i;
				md=voweldis[i];
		}
	}
	cout<<"Predictaed vowel is :";
	if(rec==0)
	cout<<"a";
	if(rec==1)
	cout<<"e";
	if(rec==2)
	cout<<"i";
	if(rec==3)
	cout<<"o";
	if(rec==4)
	cout<<"u";
	cout<<endl;
}
}
return 0;
}