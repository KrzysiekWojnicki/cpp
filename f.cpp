#include <iostream>
#include "costam.h"
using namespace std;

void Gra::tab()
{
	int l;
	cout<<"podaj liczbe: ";
	cin>>l;
	int* tab = new int[l]; // może smart pointer ?
	for(int i=0; i<l; i++)
	{
		cout<<(long)tab<<endl;
		tab++;
	}
	delete[] tab;
}

