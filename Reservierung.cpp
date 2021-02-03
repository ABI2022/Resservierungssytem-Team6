#include "Reservierung.h"

int Reservierung::autonr = 1;


Reservierung::Reservierung(Kunde* k, Spiel* s, Block* b, int r, int vp, int bp) 
{
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
