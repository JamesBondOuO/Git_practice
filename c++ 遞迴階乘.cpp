#include<iostream>
#include<cstdio>
using namespace std;
// ��J���N�A��XN������

long long cal(int N)       //  ���j�p�ⶥ�� 
{
	if(N==0)
		return 1;
	else
		return N*cal(N-1);
}


int main(){
	while(cin)
	{
		int N;
		cout<<"��J�@�Ӿ��: ";
		cin>>N;
		
		if(N<0)
		{
			cout<<"�п�J�����~"<<endl;
			continue;
		}
		else 
			cal(N);
			
		printf("%d! = %llu\n",N,cal(N));
		cout<<"---------------------------"<<endl;
	}
	
	return 0;
}
