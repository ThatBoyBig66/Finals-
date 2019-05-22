#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main ()
{
	int x;
	double i,n1;

	n1=0;

	cout<<"Input number of terms: ";
	cin >> x;
	cout<<"Series is given by:\n ";
	for (i=1; i<=x;i++)
	{
		cout <<"1/" << i << " + ";
		n1=n1 + 1/i;
	}
		cout <<"\n The sum of the " << x << " terms is: ";
	cout <<fixed << setprecision (4)<<n1;
getch();
return 0;
}
