#include<iostream>
#include<cstdio>
using namespace std;
// ��J���a�Mb�A��Xa��b���� 

long long cal(int a,int b)      // ���j�p�⦸�� 
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
		cout<<"��Ja�Mb(�ťն��j): ";
		scanf("%d %d",&a,&b);

		printf("%d��%d��= %llu\n",a,b,cal(a,b));
		cout<<"--------------------------"<<endl;
	}
	return 0;
}
