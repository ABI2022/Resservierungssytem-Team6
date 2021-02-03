#include "Reservierung.h"

int Reservierung::autonr = 1;


Reservierung::Reservierung(Kunde* k, Spiel* s, Block* b, int r, int vp, int bp) 
{
	//time_t Zeitstempel;
	//tm *test;
	//Zeitstempel = time(0);
	//test = localtime(&Zeitstempel);
	//datum.setDatum(test->tm_mday, test->tm_mon, test->tm_year);
	datum.setDatum(3, 2, 2021);
	nummer = autonr;
	autonr++;
	kunde = k;
	spiel = s;
	block = b;
	reihe = r;
	vonPlatz = vp;
	bisPlatz = bp;
}

int Reservierung::getvonPlatz()
{
	return vonPlatz;
}

int Reservierung::getbisPlatz()
{
	return bisPlatz;
}

Reservierung::~Reservierung()
{
	autonr--;
}
