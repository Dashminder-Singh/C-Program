#include <iostream>
using namespace std;

int main()
{
	int arr[]={5, 2, 3, 7};
	int *p=arr+1;

	cout<<*arr+10<<endl<<arr+10;

	return 0;
}