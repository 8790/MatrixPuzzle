#include<iostream>
using namespace std;

int main(){
	int N,a,b;                         //����3��������N�Ǿ���߳���a���У�b���� 
	cout<<"N=";
	cin>>N;
	for(a=1;a<=N;a++)                  //ÿһ�е�ѭ����ʼ 
	{for(b=1;b<=N;b++) 
	  if(b>N-a+1)                      //�Խ������²��� ������������ֵ��߳�֮��+1��ֵ 
	    if(b>a) cout<<N-b+1;
	    else cout<<N-a+1;
	  else if(a<=b) cout<<a;           //�Խ������ϲ�������������е���Сֵ 
	else cout<<b;
	cout<<endl;                        //ÿһ��ĩβ�������� 
	}
	
}

