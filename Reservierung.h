#pragma once
//#include "CDatum.h"
//#include "Kunde.h"
//#include "Block.h"
//#include "Spiel.h"
class Spiel;
class CDatum;
class Block;
class Kunde;
class Reservierung
{
	private:
	static int autonr;
	int nummer;
	CDatum datum;
	int reihe;
	int vonPlatz;
	int bisPlatz;
	Kunde* kunde;
	Spiel* spiel;
	Block* block;
	public:
	Reservierung(Kunde*, Spiel*, Block*, int r, int vp, int bp);
	int getvonPlatz();
	int getbisPlatz();
	~Reservierung();
};

