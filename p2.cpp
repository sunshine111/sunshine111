#include<iostream>
#include<fstream>//�ļ���
using namespace std;
void arraysum(int n)
{ 
	int *a; 
	int sum=0; a=new int[n]; //��ʼ
    ifstream in("��ҵ2.txt"); //�����ļ���
	for(int j=0;in>>a[j],j<n;j++)//forѭ��	
	sum+=a[j];
    cout<<sum<<endl;
	in.close();//�ر���
}
int main(void)
{
	int a;
	cout<<"���ݳ���:";
	cin>>a;
	cout<<"��Ϊ"; 
	arraysum(a);//�����������е�ֵ�������Ľ������ 
	return 0; 
}