#include "bibliteki"

using namespace std;

void Gra1::wczytaj()
{
	string linia,pierwszy,drugi,trzeci;
	int nr_lini;
	fstream plik_pytania;
	plik_pytania.open("pytania",ios::in);
	if(plik_pytania.good()==false) cout<<"nie można otworzyć"<<endl;
	while(getline(plik_pytania,linia))
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

	// Gra1::dowidzenia();
	
}

/*
{
	cout<<"najwyrażniej nie można ot tak sobie\nprzywoływoś funkcji innej klasy\n do widzienia."<<endl;
}*/
