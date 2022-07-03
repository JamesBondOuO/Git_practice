#include<iostream>
#include<cstdio>
using namespace std;
// 輸入整數N，輸出第N項費氏數列 

long long Fn(int N)    // 遞迴計算費氏數列 
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
		cout<<"輸入一個整數: ";
		cin>>N;
		printf("費氏數列至第%d項= ",N);
		for(i=1;i<=N;i++)
		{
			cout<<Fn(i)<<" "; 
		}
		cout<<endl<<"---------------------------------"<<endl;
	}
	return 0;
}
