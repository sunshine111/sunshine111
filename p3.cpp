#include<iostream>
#include<fstream>//�ļ���
using namespace std;
void arraysum(int n,int min,int max)
{ 
	int *a; 
	int sum=0; a=new int[n]; //��ʼ
    ifstream in("��ҵ2.txt"); //�����ļ���
	for(int j=min;in>>a[j],j<=max;j++)//forѭ��	
	sum+=a[j];
    cout<<sum<<endl;
	in.close();//�ر���
}
int main(void)
{
	int a,min,max;
	cout<<"���ݳ���:";
	cin>>a;
	cout<<"������min:";
	cin>>min;
	cout<<"������max:";
	cin>>max;
	cout<<"��Ϊ"; 
	arraysum(a,min,max);//�����������е�ֵ�������Ľ������ 
	return 0; 
}