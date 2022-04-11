#include<iostream>
using namespace std;

class number{
	public:
		void eo(int n)
		{
			if(n%2==0)
			{
				cout<<"Even hu mai"<<endl;
			}
			else
			{
				cout<<"Odd hu mai"<<endl;
			}
		}
		
		void prime(int n)
		{
			int count=0;
			for(int i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<"Ha Prime Hu Mai"<<endl;
			}
			else
			{
				cout<<"Nahi Hu Prime"<<endl;
			}
		}
		void fibo(int n)
		{
			int a=0,b=1,i;
			int s=a+b;
			int count=0;
			for(i=3;i<=40;i++)
				{
					a=b;
					b=s;
					s=a+b;
					if(n==s)
					{
						count++;
					}
				}
	
			if(count==1 || n==0 || n==1)
			{
				cout<<"Ha Fibonaci hai"<<endl;
			}	
			else
			{
				cout<<"Nahi Fibonaci nahi hai"<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"Number Likho: ";
	cin>>n;
	number num1;
	num1.eo(n);
	num1.prime(n);
	num1.fibo(n);
}
		
