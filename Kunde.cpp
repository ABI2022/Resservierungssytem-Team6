#include "Kunde.h"

Kunde::Kunde(string name)
{
	this->name = name;
	passwort = "";
}

void Kunde::hinzufuegenReservierung(Reservierung* r)
{
	reservierungen.push_back(r);
}

void Kunde::loescheReservierung(Reservierung* r)
{
	reservierungen.remove(r);
}

double Kunde::berechneGesamtUmsatz()
{
	//improvisiert,dass es einen festen preis pro Platz gibt, da keine Datenbank vorhanden ist
	double ergebnis;
	double ppp=50; ///ppp=preisproplatz
	int counter=0;
	for (auto pos : reservierungen) 
	{
		counter += abs(pos->getvonPlatz() - pos->getbisPlatz());
	}
	ergebnis = counter * ppp;
	return ergebnis;
}

Kunde::~Kunde()
{
}
