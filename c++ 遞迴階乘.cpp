#include<iostream>
#include<cstdio>
using namespace std;
// 輸入整數N，輸出N的階乘

long long cal(int N)       //  遞迴計算階乘 
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
		cout<<"輸入一個整數: ";
		cin>>N;
		
		if(N<0)
		{
			cout<<"請輸入正整數~"<<endl;
			continue;
		}
		else 
			cal(N);
			
		printf("%d! = %llu\n",N,cal(N));
		cout<<"---------------------------"<<endl;
	}
	
	return 0;
}
