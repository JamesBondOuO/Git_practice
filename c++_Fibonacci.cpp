#include<iostream>
#include<cstdio>
using namespace std;
// ��J���N�A��X��N���O��ƦC 

long long Fn(int N)    // ���j�p��O��ƦC 
{
	if(N==1 or N==2)
		return 1;
	else
		return Fn(N-1)+Fn(N-2);
}

int main(){
	while(cin)
	{
		int gitLab;
		int N,i; 
		cout<<"��J�@�Ӿ��: ";
		cin>>N;
		printf("�O��ƦC�ܲ�%d��= ",N);
		for(i=1;i<=N;i++)
		{
			cout<<Fn(i)<<" "; 
		}
		cout<<endl<<"---------------------------------"<<endl;
	}
	return 0;
}
