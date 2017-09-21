#include "bibliteki"
using namespace std;

void Gra::przywitanie()
{
	cout<<"----------------------------"<<endl;
	cout<<"|  WITAJ PRZYBYSZU Z REALA |"<<endl;
	cout<<"----------------------------"<<endl;	
	Gra::przejdz_dalej();
}

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
//		Gra1::dowidzenia();

	}
}

/*void Gra::dowidzenia()
{
	system("clear");
	cout<<"pożegnanie"<<endl;
}
*/

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

