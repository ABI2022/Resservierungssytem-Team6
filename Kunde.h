#pragma once
#include <string>
#include <list>
using namespace std;
class Kunde
{
private:
	string name;
	string passwort;
	list <*Reservierung> reservierungen;
public:
	Kunde(string name);
	void hinzufuegenReservierung(Reservierung*);
	void loescheReservierung(Reservierung*);
	double berechneGesamtUmsatz();
	~Kunde();
};

