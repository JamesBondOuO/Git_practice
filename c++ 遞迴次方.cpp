#include<iostream>
#include<cstdio>
using namespace std;
// 輸入整數a和b，輸出a的b次方 

long long cal(int a,int b)      // 遞迴計算次方 
{
	if(b==0)
		return 1;
	else
		return a*cal(a,b-1);
} 

int main(){
	while(cin)
	{
		int a,b;
		cout<<"輸入a和b(空白間隔): ";
		scanf("%d %d",&a,&b);

		printf("%d的%d方= %llu\n",a,b,cal(a,b));
		cout<<"--------------------------"<<endl;
	}
	return 0;
}
