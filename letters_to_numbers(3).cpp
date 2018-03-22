#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(long n)
{

    long a,b=1;
    a=n;
     switch(a)
        {
        case 1:
            cout<<" one";
            break;
        case 2:
            cout<<" two";
            break;
        case 3:
            cout<<" three";
            break;
        case 4:
            cout<<" four";
            break;
        case 5:
            cout<<" five";
            break;
        case 6:
            cout<<" six";
            break;
        case 7:
            cout<<" seven";
            break;
        case 8:
            cout<<" eight";
            break;
        case 9:
            cout<<" nine";
            break;
        case 10:
            cout<<" ten";
            break;
        case 11:
            cout<<" eleven";
            break;
        case 12:
            cout<<" twelve";
            break;
        case 13:
            cout<<" thirteen";
            break;
        case 14:
            cout<<" fourteen";
            break;
        case 15:
            cout<<" fifteen";
            break;
        case 16:
            cout<<" sixteen ";
            break;
        case 17:
            cout<<" seventeen";
            break;
        case 18:
            cout<<" eighteen";
            break;
        case 19:
            cout<<" ninteen";
            break;
        case 20:
            cout<<"twenty";
            break;
        case 30:
            cout<<"thirty";
        case 40:
            cout<<"forty";
            break;
	default:
	b=0;
	break;
        }

	return b;
}




int main()
{
    long long n,a,b=0,c,d,e,i,j;

    cin>>n;
    if(n==0)
    {
    	cout<<"zero";
    	return 0;
    }
    d=n;
    string p,z;
    string  s = to_string(n);

    check(n);

    if(n<=19)
        return 0;
    while(d>0)
    {
        b=b+1;
        d=d/10;

    }

    for(i=0;i<b;i++)
    {
     if(b==2)
     {
	e=s[i]-48;
         if(i%2==0)
         {
             check(e);
             cout<<"ty ";
         }
         else
            check(e);
     }

     if(b==3)
     {
     	e=s[i]-48;
     	check(e);
     	if(e!=0)
     	cout<<" hundred ";
     	s[i]=s[i+1];
     	s[i+1]=s[i+2];
     	s[i+2]='\0';

     	if(!check(stoi(s)))
     	{
     		b=2;
     		i=-1;
     		continue;
     	}
     	break;
     }
     if(b==4)
     {
     	e=s[i]-48;
     	check(e);
     	if(e!=0)
     	cout<<" Thousand";
     	s[i]=s[i+1];
     	s[i+1]=s[i+2];
     	s[i+2]=s[i+3];
     	s[i+3]='\0';
     	b--;
     	i=-1;

     }

     if(b==5)
     {
	 z="";
	z=z+s[i];
	z=z+s[i+1];

	e=stoi(z);

     	if(!check(e))
     	{

	 int m=z[0]-48;
	 int n=z[1]-48;
             check(m);
             cout<<"ty ";
	  check(n);

     	}
     	cout<<" Thousand";
     	s[i]=s[i+2];
     	s[i+1]=s[i+3];
     	s[i+2]=s[i+4];
     	s[i+3]='\0';
     	b=b-2;
     	i=-1;

     }

     if(b==6)
     {
     	e=s[i]-48;
     	check(e);
     	if(e!=0)
     	cout<<" Lakh";
     	s[i]=s[i+1];
     	s[i+1]=s[i+2];
     	s[i+2]=s[i+3];
     	s[i+3]=s[i+4];
     	s[i+4]=s[i+5];
     	s[i+5]='\0';
     	b--;
     	i=-1;

     }

     if(b==7)
     {
	string z="";
	z=z+s[i];
	z=z+s[i+1];

	e=stoi(z);

     	if(!check(e))
     	{

	 int m=z[0]-48;
	 int n=z[1]-48;
             check(m);
             cout<<"ty ";
	  check(n);

     	}
     	cout<<" Lakh";
     	s[i]=s[i+2];
     	s[i+1]=s[i+3];
     	s[i+2]=s[i+4];
     	s[i+3]=s[i+5];
     	s[i+4]=s[i+6];
     	s[i+5]='\0';
     	b=b-2;
     	i=-1;

     }

     if(b==8)
     {
     		e=s[i]-48;
     	check(e);
     	cout<<" crore";
     	s[i]=s[i+1];
     	s[i+1]=s[i+2];
     	s[i+2]=s[i+3];
     	s[i+3]=s[i+4];
     	s[i+4]=s[i+5];
     	s[i+5]=s[i+6];
     	s[i+6]=s[i+7];
     	s[i+7]='/0';
     	b--;
     	i=-1;
     }

     if(b==9)
     {
     	string z="";
	z=z+s[i];
	z=z+s[i+1];

	e=stoi(z);

     	if(!check(e))
     	{

	 int m=z[0]-48;
	 int n=z[1]-48;
             check(m);
             cout<<"ty ";
	  check(n);

     	}
     	cout<<" crore";
     	s[i]=s[i+2];
     	s[i+1]=s[i+3];
     	s[i+2]=s[i+4];
     	s[i+3]=s[i+5];
     	s[i+4]=s[i+6];
     	s[i+5]=s[i+7];
     	s[i+6]=s[i+8];
     	s[i+7]='\0';
     	b=b-2;
     	i=-1;

     }

    }
    return 0;
}
