#include <iostream>
#include <cstdlib>
#include "costam.h"
using namespace std;
// dodałem koment
void Gra::przejdz_dalej()
{
	char tn;
	cout<<"ciekawy co dalej ? [T/n}"<<endl;
	cin>>tn;
	if(tn =='t')
	{
		cout<<"wybrałeś tak"<<endl;
		Gra::tab();
	}
	else
	{
		cout<<"wybraleś nie"<<endl;
		system("sleep 1");
		Gra::dowidzenia();
	}
}

void Gra::dowidzenia()
{
	system("clear");
	cout<<"pożegnanie"<<endl;
}
