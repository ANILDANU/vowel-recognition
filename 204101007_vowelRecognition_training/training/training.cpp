// vowel recog.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "fstream"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
ifstream fin;     //for opening a file
ofstream f;		  //for wirting into a file
int i,j,p=12,l=0;
long double n,sum=0,dc;
long double r[13],s[320],e[13],al[13][13],k[13],a[13],c[5][13],av[5][13];    
fin.open("silence.txt");    //taking input file which contains silence
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
l++;                 //this loop is for calculating dc shift
}
dc=sum/l;
fin.close();
for(int vowel=0;vowel<5;vowel++)				//this loop will run for 5 times one time each vowel
{
	for(int y=0;y<5;y++)								
	{
		for(int z=1;z<=12;z++)           // this is for initializing average values of Ci to zero
			av[y][z]=0;
	}
	for(int num=0;num<10;num++)     // this loop will run 10 times for one vowel 50 times in total
	{
		fin.close();
		if(vowel==0 && num==0)
		fin.open("204101007_a_1.txt");      //these if condition are used for opening appropriate file at a time
		if(vowel==0 && num==1)
		fin.open("204101007_a_2.txt");
		if(vowel==0 && num==2)
		fin.open("204101007_a_3.txt");
		if(vowel==0 && num==3)
		fin.open("204101007_a_4.txt");
		if(vowel==0 && num==4)
		fin.open("204101007_a_5.txt");
		if(vowel==0 && num==5)
		fin.open("204101007_a_6.txt");
		if(vowel==0 && num==6)
		fin.open("204101007_a_7.txt");
		if(vowel==0 && num==7)
		fin.open("204101007_a_8.txt");
		if(vowel==0 && num==8)
		fin.open("204101007_a_9.txt");
		if(vowel==0 && num==9)
		fin.open("204101007_a_10.txt");
		if(vowel==1 && num==0)
		fin.open("204101007_e_1.txt");
		if(vowel==1 && num==1)
		fin.open("204101007_e_2.txt");
		if(vowel==1 && num==2)
		fin.open("204101007_e_3.txt");
		if(vowel==1 && num==3)
		fin.open("204101007_e_4.txt");
		if(vowel==1 && num==4)
		fin.open("204101007_e_5.txt");
		if(vowel==1 && num==5)
		fin.open("204101007_e_6.txt");
		if(vowel==1 && num==6)
		fin.open("204101007_e_7.txt");
		if(vowel==1 && num==7)
		fin.open("204101007_e_8.txt");
		if(vowel==1 && num==8)
		fin.open("204101007_e_9.txt");
		if(vowel==1 && num==9)
		fin.open("204101007_e_10.txt");
		if(vowel==2 && num==0)
		fin.open("204101007_i_1.txt");
		if(vowel==2 && num==1)
		fin.open("204101007_i_2.txt");
		if(vowel==2 && num==2)
		fin.open("204101007_i_3.txt");
		if(vowel==2 && num==3)
		fin.open("204101007_i_4.txt");
		if(vowel==2 && num==4)
		fin.open("204101007_i_5.txt");
		if(vowel==2 && num==5)
		fin.open("204101007_i_6.txt");
		if(vowel==2 && num==6)
		fin.open("204101007_i_7.txt");
		if(vowel==2 && num==7)
		fin.open("204101007_i_8.txt");
		if(vowel==2 && num==8)
		fin.open("204101007_i_9.txt");
		if(vowel==2 && num==9)
		fin.open("204101007_i_10.txt");
		if(vowel==3 && num==0)
		fin.open("204101007_o_1.txt");
		if(vowel==3 && num==1)
		fin.open("204101007_o_2.txt");
		if(vowel==3 && num==2)
		fin.open("204101007_o_3.txt");
		if(vowel==3 && num==3)
		fin.open("204101007_o_4.txt");
		if(vowel==3 && num==4)
		fin.open("204101007_o_5.txt");
		if(vowel==3 && num==5)
		fin.open("204101007_o_6.txt");
		if(vowel==3 && num==6)
		fin.open("204101007_o_7.txt");
		if(vowel==3 && num==7)
		fin.open("204101007_o_8.txt");
		if(vowel==3 && num==8)
		fin.open("204101007_o_9.txt");
		if(vowel==3 && num==9)
		fin.open("204101007_o_10.txt");
		if(vowel==4 && num==0)
		fin.open("204101007_u_1.txt");
		if(vowel==4 && num==1)
		fin.open("204101007_u_2.txt");
		if(vowel==4 && num==2)
		fin.open("204101007_u_3.txt");
		if(vowel==4 && num==3)
		fin.open("204101007_u_4.txt");
		if(vowel==4 && num==4)
		fin.open("204101007_u_5.txt");
		if(vowel==4 && num==5)
		fin.open("204101007_u_6.txt");
		if(vowel==4 && num==6)
		fin.open("204101007_u_7.txt");
		if(vowel==4 && num==7)
		fin.open("204101007_u_8.txt");
		if(vowel==4 && num==8)
		fin.open("204101007_u_9.txt");
		if(vowel==4 && num==9)
		fin.open("204101007_u_10.txt");
long double ds[100000];     //this array is used for storing contend of file so we can substract dc shift
i=0;
int fr=0;
if(fin.fail())
	cout<<"error";
while(!fin.eof())
{
	fin>>n;
	ds[i]=n;     //storing contend of input vowel file
	i++;
	fr++;
}
int p=0;
fin.close();
f.open("input.txt");
while(p<i)
{
	f<<ds[p]-dc<<endl;       //sustracting dc shift and putting the result into the file input.txt
	p++;
}
f.close();
fin.open("input.txt");
long double max=0;
while(!fin.eof())
{
	fin>>n;
	if(max<n)          //this will find the maxmum value of sound used in normlization
		max=n;
}
long double ratio=10000/max;
fin.close();
f.open("input.txt");
p=0;
while(p<i)
{
	f<<ds[p]*ratio<<endl;                //performing normalization
	p++;
}
f.close();
fin.open("input.txt");
	fr=fr/320;                          //fr is used for calculating number of frames  we will find Ci only for middle five frames
	if(fr%2==0)                  
		fr=fr+1;
	fr=fr/2;
	fr=fr-2;
	fr=fr*320;
	for(int x=0;x<fr;x++)       // this is used for ognoring frames before middle five frame
		fin>>n;
	for(int x=0;x<5;x++)     //this loop will 5 time one time for each frame
	{
	for(i=0;i<320;i++)
	{
		s[i]=n;
		fin>>n;
	}
	for(i=0;i<=12;i++)
	{
		r[i]=0;                        //calculating the values of Ri for each frame
		for(j=0;j<=319-i;j++)
			r[i]=r[i]+s[j]*s[j+i];
	}
	e[0]=r[0];
	for(i=1;i<=12;i++)
	{
		k[i]=r[i];
		for(j=1;j<=i-1;j++) 
			k[i]=k[i]-al[j][i-1]*r[i-j];     //calculating the values of Ki 
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
		a[i]=al[i][12];       //calcuating the values of ai for each frame

	
	for(i=1;i<=12;i++)
	{
		c[x][i]=a[i];
		for(j=1;j<=i-1;j++)
			c[x][i]=c[x][i]+j*c[x][j]*a[i-j]/i;				//computing the value of Ci for each frame
	}
	long double W[13];     //this is for calculating raised sine window
	for(i=1;i<=12;i++)
	{
		W[i]=1+6*sin(3.14*i/12);          //applying raised sine window
		c[x][i]=c[x][i]*W[i];
	}
	for(int z=1;z<=12;z++)
		av[x][z]=av[x][z]+c[x][z];          //adding all the values of Ci frame wise for calculating average value of Ci
		}
	}
if(vowel==0)
{
f.open("ci_a.txt");
cout<<"Average Values of Ci for vowel a"<<endl;
}
if(vowel==1)
{
f.open("ci_e.txt");
cout<<"Average Values of Ci for vowel e"<<endl;
}
if(vowel==2)
{
f.open("ci_i.txt");
cout<<"Average Values of Ci for vowel i"<<endl;
}
if(vowel==3)
{
f.open("ci_o.txt");
cout<<"Average Values of Ci for vowel o"<<endl;
}
if(vowel==4)
{
f.open("ci_u.txt");
cout<<"Average Values of Ci for vowel u"<<endl;
}
for(int y=0;y<5;y++)
	{
		cout<<endl<<"For "<<y+1<<" frame"<<endl;
		for(int z=1;z<=12;z++)
		{
			f<<av[y][z]/10<<endl;         //this loop will write the values of Ci into the Ci_vowel.txt file for each vowel
			cout<<av[y][z]/10<<endl;
		}
	}
f.close();
}
return 0;
}