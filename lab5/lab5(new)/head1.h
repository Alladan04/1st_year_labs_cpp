#ifndef HEAD1_H_INCLUDED
#define HEAD1_H_INCLUDED
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
//////////////////////////////////////////
void puziko (int *a,int n, char d)
{   int flag=1,i,k=0,k1=0,j=0;
    while (flag==1)
    {
        flag=0;
        for (i=0; i<n-1-j;i++)
        {
            k++;
            if (d=='+')
            {
                if (a[i]>a[i+1])
                {   k1++;
                    swap(a[i],a[i+1]);
                    flag = 1;

                }
            }
            else
            {
                 if (a[i]<a[i+1])
                {   k1++;
                    flag = 1;
                    swap(a[i],a[i+1]);
                }
            }
        }
        j++;
    }
    if (n<=10)
    {
        cout<<endl<<endl<<"������ ��������������� ������� ��������:"<<endl;
        for (i=0;i<n;i++) cout<<"a["<<i<<"]="<<a[i]<<"  ";
    }
    else cout<<endl<<"����� ��������<�";
    cout<<endl<< "���������: "<< k<<endl;
    cout<<"������������: "<<k1<< endl;
}
/////////////////////////////////////////////////////////////////
void cheese (int *b, int n, char d)
{
    int mx,i,temp,j;
    int k=0,k1=0; //���������� ���������
    for (i=0;i<n-1;i++)
    {
        mx=i;
        for (j=i+1;j<n;j++)
        {   k++;
            if (d=='+')         //���������� �� �����������
            {
                if (b[j]<b[mx])
                {
                    mx=j;
                }
            }
            else if (b[j]>b[mx])  //���������� �� ��������
                {
                   mx=j;
                }
        }
        if (b[mx]!=b[i])    //������������
        {
        swap(b[mx],b[i]);
        k1++;
        }
    }
    if (n<=10)
        {
            cout<<endl<<"������, ��������������� ������� ������ ��������: "<<endl;
            for (i=0;i<n;i++) cout<<"b["<<i<<"]="<<b[i]<<"  ";
        }
     else cout<<endl<<"����� ������<�";
    cout<<endl<<"���������: "<<k<<endl;
    cout<< "������������: "<<k1<<endl;
}
////////////////////////////////////////////////////////////////
int iRandom( int a, int b )       	 	// ����� �� [a,b]
{
return a + ( b - a +1) * rand()/RAND_MAX ;
}



#endif // HEAD1_H_INCLUDED
