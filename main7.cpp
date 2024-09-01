#include <iostream>
using namespace std;
int main() {
	
	int m,n;
	cout<<"Enter numerator";
	cin>>m;
	cout<<"Enter denominator";
	cin>>n;
	int mn=min(m,n);
	int GCD=1;
	for(int i=1;i<=mn;i++)
	{
		if(m%i==0 && n%i==0)
		{
			GCD=max(GCD,i);
		}
	}
	cout<<"Great common diviser is:"<<GCD;
	
	return 0;
}
