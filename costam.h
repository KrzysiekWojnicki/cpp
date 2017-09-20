#include <iostream>

using namespace std;
/* 
{
	//czysta funkcja virtualna
	virtual void przywitanie()=0;
        virtual void przejdz_dalej()=0;
        virtual void dowidzenia()=0;
	virtual void tab()=0;
}
*/
class Gra  
{
	public:

		void przywitanie();
		void przejdz_dalej();
		void dowidzenia();
		void tab();

};

class Gra1
{
	public:
		void przywitanie();
		void przejdz_dalej();
                void dowidzenia();
                void tab();
		//unikalne
		void wczytaj();
};

class Admin  

{
	string login="kw";
	string haslo="asasas";
	public:
	//unikalne
	void logowanie();
};
