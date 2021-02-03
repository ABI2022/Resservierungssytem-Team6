#pragma once

//#include "Reservierung.h"
class Reservierung;// Vorwärtsdeklaration

#include <string>
#include <list>

using namespace std;


	//sonst syntax fehler 
class Kunde
{
private:
	string name;
	string passwort;
	list <Reservierung*> reservierungen;
public:
	Kunde(string name);
	string getName();
	void hinzufuegenReservierung(Reservierung*);
	void loescheReservierung(Reservierung*);
	double berechneGesamtUmsatz();
	~Kunde();
};