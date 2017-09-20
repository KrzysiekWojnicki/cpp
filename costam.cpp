#include <iostream>
#include <fstream>
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

void Gra1::wczytaj()
{
	string linia;
	int nr_lini;
	fsteram plik_pytania;
	plik_pytania.open("pytania";ios::in);
	if(plik_pytania.good()==false) cout<<"nie można otworzyć"<<endl;
	while(getline(plik_pytania,linia)
		{
		switch (nr_lini)
		{
			case 1: pierwszy=linia; break;
			case 2: drugi=linia; break;
			case 3: trzeci=linia; break;
		}
		nr_lini++;
		}
		plik_pytania.close();
	cout<<pierwszy<<endl;
	cout<<drugi<<endl;
	cout<<trzeci<<endl;
}


