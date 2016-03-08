#include<iostream>
#include<fstream>//文件流
using namespace std;
void arraysum(int n)
{ 
	int *a; 
	int sum=0; a=new int[n]; //初始
    ifstream in("作业2.txt"); //输入文件流
	for(int j=0;in>>a[j],j<n;j++)//for循环	
	sum+=a[j];
    cout<<sum<<endl;
	in.close();//关闭流
}
int main(void)
{
	int a;
	cout<<"数据长度:";
	cin>>a;
	cout<<"和为"; 
	arraysum(a);//将数组中所有的值以整数的结果返回 
	return 0; 
}