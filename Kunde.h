#pragma once

#include "util.h"

//#include "Reservierung.h"
class Reservierung;// Vorwärtsdeklaration
	//sonst syntax fehler 
class Kunde
{
private:
	string name;
	string passwort;
	list <Reservierung*> reservierungen;
public:
	Kunde(string name);
	void hinzufuegenReservierung(Reservierung*);
	void loescheReservierung(Reservierung*);
	double berechneGesamtUmsatz();
	~Kunde();
};