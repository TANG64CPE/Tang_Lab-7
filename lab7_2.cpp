#include<iostream>

using namespace std;

int main()
{
	int i = 0,N=10000, P[5000]={}, k, result;
	P[i]=1;
	while ( P[i] % 2 == 1)
	{
		return P[5000];
		i++;
	}
	cout << "Please input k:";
	cin >> k;
	if( k > 0)
	{
		if ( k < 5000)
		{
			if( P[i] % k == 0)
			{
			while(i < 5000)
			{
				P[i] = 2*i+1;
				i++;
			}
			}else{
				result = result + P[i];
			}
		}else
		{
			cout << result;
		}
	}else
	{
		cout << "Invalid Input!!!";
	}
	return 0;
}
