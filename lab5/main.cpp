////////////сделать заголовочный файл
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
////////////////////////////
int iRandom( int a, int b );
/////////////////////////// прототипы сортировки
void puziko (int* a, int n, char d);//пузыриком
void cheese (int*b, int n, char d);//выбором
//////////////////////////
int main()
{   setlocale(0,"rus");
    int i,n;
    int *a;
    int *b;

    for (n=5;n<=500;n*=10){
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
    if (n<10){
    cout<<endl<<"---------------повторно---------------";
    puziko(a,n,'+');
    cheese(b,n,'+');
    cout<<endl<<"----------обратная сортировка----------";
    puziko(a,n,'-');
    cheese(b,n,'-');}
    delete []a;
    delete []b;
    }
    return 0;

}
//////////////////////////////////////////
void puziko (int *a,int n, char d)
{   int flag=1,i,k=0,k1=0,temp,j=0;
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
                    flag = 1;
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
            else
            {
                 if (a[i]<a[i+1])
                {   k1++;
                    flag = 1;
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        j++;
    }
    if (n<=10)
    {
        cout<<endl<<endl<<"массив отсортированный методом пузырька:"<<endl;
        for (i=0;i<n;i++) cout<<"a["<<i<<"]="<<a[i]<<"  ";
    }
    else cout<<endl<<"метод пузырька<З";
    cout<<endl<< "сравнений: "<< k<<endl;
    cout<<"перестановок: "<<k1<< endl;
}
/////////////////////////////////////////////////////////////////
void cheese (int *b, int n, char d)
{
    int mx,i,temp,imx;
    int k=0,k1=0; //количество сравнений
    for (i=0;i<n-1;i++)
    {
        int j;
        mx=i;
        for (j=i+1;j<n;j++)
        {   k++;
            if (d=='+')         //сортировка по возрастанию
            {
                if (b[j]<b[mx])
                {
                    mx=j;
                }
            }
            else if (b[j]>b[mx])  //сортировка по убыванию
                {
                   mx=j;
                }
        }
        if (b[mx]!=b[i])    //перестановка
        {
        temp=b[i];
        b[i]=b[mx];
        b[mx]=temp;
        k1++;
        }
    }
    if (n<=10)
        {
            cout<<endl<<"массив, отсортированный методом выбора минимума: "<<endl;
            for (i=0;i<n;i++) cout<<"b["<<i<<"]="<<b[i]<<"  ";
        }
     else cout<<endl<<"метод выбора<З";
    cout<<endl<<"сравнений: "<<k<<endl;
    cout<< "перестановок: "<<k1<<endl;
}
////////////////////////////////////////////////////////////////
int iRandom( int a, int b )       	 	// целое из [a,b]
{
return a + ( b - a +1) * rand()/RAND_MAX ;
}

