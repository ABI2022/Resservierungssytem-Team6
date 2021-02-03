#include "System.h"
#include "Reservierung.h"
#include "Spiel.h"
#include "Kunde.h"
void System::hinzufügenReservierung(Reservierung* r)
{
	reservierung.push_back(r);
}

Reservierung System::reservierePlatz(Kunde, Spiel, string, int, int, int)
{
	
	return ;
}

Spiel System::sucheSpiel(int num)
{
	for (auto pos : spiele) 
	{
		if (pos->getSpielNr() == num) 
		{
			return pos;
		}
	}
}

Kunde System::sucheKunde(string name)
{
	for (auto pos : kunden) 
	{
		if (pos->getName() == name) 
		{
			return pos;
		}
	}
}
