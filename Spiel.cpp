#include "Spiel.h"

Spiel::Spiel()
{
}


Spiel::~Spiel()
{
}


Spiel::Spiel(int spielNr, CDatum* zeit, string stadion)
{
    this->spielNr = spielNr;
    this->zeit = zeit;
    stadionName = stadion;
}


void Spiel::loescheReservierung(Reservierung* r)
{
	for (Reservierung* R : ReservierungsListe)
	{
		if (R == r)
		{
			ReservierungsListe.remove(R);
			delete static_cast<Reservierung*>(r);
			break;
		}
	}
}


Block* Spiel::sucheBlock(string bezeichnung)
{
	//TODO implementieren
  return nullptr;
}


void Spiel::hinzufuegenReservierung(Reservierung* r)
{
    ReservierungsListe.push_back(r);
}


int Spiel::getSpielNr()
{
	return spielNr;
}


string Spiel::getStadionName()
{
	return  stadionName;
}


void Spiel::anzeigenReservierungsListe()
{

}
