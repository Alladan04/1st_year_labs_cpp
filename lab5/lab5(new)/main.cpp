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
        cout<<endl<< "ваш массив: "<<endl;
        for( i = 0; i < n; i++ )     			// цикл инициализации массива
        {	a[i] = iRandom(1,9);    // целая случайная величина
            if (n<10)
            cout<<"a["<<i<<"]="<<a[i]<<"  ";
            b[i]=a[i];
        }
        puziko(a,n,'+');
        cheese(b,n,'+');
        if (n<10)
        {
            cout<<endl<<"---------------повторно---------------";
            puziko(a,n,'+');
            cheese(b,n,'+');
            cout<<endl<<"----------обратная сортировка----------";
            puziko(a,n,'-');
            cheese(b,n,'-');
        }
        delete []a;
        delete []b;
    }
    return 0;
}

