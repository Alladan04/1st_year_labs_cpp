#include <iostream>
#include<stdlib.h>
#include<time.h>
#include"head1.h"
using namespace std;
int main()
{   setlocale(0,"rus");
    int i,n;
    int *a;
    int *b;

    for (n=5;n<=500;n*=10)
    {
        cout<<"--------------------------------------"<<endl<<"n = " <<n;
        a=new int[n];
        b=new int[n];
        srand((unsigned int)time(NULL));
        rand();
        if (n<10)
        cout<<endl<< "��� ������: "<<endl;
        for( i = 0; i < n; i++ )     			// ���� ������������� �������
        {	a[i] = iRandom(1,9);    // ����� ��������� ��������
            if (n<10)
            cout<<"a["<<i<<"]="<<a[i]<<"  ";
            b[i]=a[i];
        }
        puziko(a,n,'+');
        cheese(b,n,'+');
        if (n<10)
        {
            cout<<endl<<"---------------��������---------------";
            puziko(a,n,'+');
            cheese(b,n,'+');
            cout<<endl<<"----------�������� ����������----------";
            puziko(a,n,'-');
            cheese(b,n,'-');
        }
        delete []a;
        delete []b;
    }
    return 0;
}

