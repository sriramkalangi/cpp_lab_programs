#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<" enter a number:" << endl;
	cin >> n;
	int i;
	for(i=0;i<=n;i++){
		cout << n << "X" << i << "=" << n*i << endl;
	}
	return 0;
}
