#include "bibliteki"
using namespace std;

void Admin::logowanie()
{
	system("clear");
	string login , haslo;
	cout<<"podaj login: ";
	cin>>login;
	cout<<"podaj hasło: ";
	cin>>haslo;
	if((login==Admin::login)&&(haslo==Admin::haslo))
	{
		cout<<"udało się"<<endl;
	}
	else
	{
		cout<<"nie udało się , dupa :("<<endl;
	};

	// nie ta klasa -Gra::dowidzenia();
}
