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
	return 0;
}

Kunde::~Kunde()
{
}
