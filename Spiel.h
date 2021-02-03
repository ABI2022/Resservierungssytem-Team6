#pragma once
#include "util.h"


class Reservierung;

class Spiel

	{
private:
	int spielNr;
	CDatum* zeit;
	string team1;
	string team2;
	string stadionName;
	list <Reservierung*> ReservierungsListe;

public:
	Spiel();
	~Spiel();
	Spiel(int spielNr, CDatum* zeit, string stadion);
	void loescheReservierung(Reservierung* r);
	Block* sucheBlock(string bezeichnung);
	void hinzufuegenReservierung(Reservierung* r);

	int getSpielNr();
	string getStadionName();

	void anzeigenReservierungsListe();
	
	

	
};

