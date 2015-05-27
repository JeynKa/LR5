#include <iostream>
#include <locale.h>
using namespace std;
void obh (int node, int n, int *aa) // функция получает в качестве аргумента номер узла
{
   int *b=new int[n];
   for (int i=0; i<n; i++)
	   b[i]=0;
   for (int i=0; i<n; i++)
	   if (aa[i]==node+1)
		   b[i]=aa[i];
    //aa[node]=0;
	/*cout<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<aa[i]<<" ";
	}
	cout<<endl<<"node="<<node<<endl;*/
	for (int i=0; i<n; i++)
	   if (b[i]!=0) obh(i,n,aa);
	cout<<node+1<<" ";
return;
}
int main(void)
{
	setlocale(0, "Russian");
	int n;
	cout<<"введите кол-во узлов: ";
	cin>>n;
	cout<<"\n";
	int *a=new int[n];
	cout<<"введите эл-ты: ";
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"\n прямой обход \n";
	obh(0,n,a);
	system("pause");
}
