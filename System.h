#pragma once

#include "util.h"

class Kunde;
class Spiel;
class Reservierung;

class System {
	private:
		list<Kunde*> kunden;
		list<Spiel*> spiele;
		list<Reservierung*> reservierung;

        void hinzuf�genReservierung(Reservierung*);

    public:
        Reservierung reservierePlatz(Kunde, Spiel, string, int, int, int);
        bool storniereReservierung(int);
        Spiel sucheSpiel(int);
        Kunde sucheKunde(string);
        string ermittleBlockbelegung();

	};
