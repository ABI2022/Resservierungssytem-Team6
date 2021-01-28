#pragma once



class Block
{
private:
	const int REIHEN = 50;
	const int PLAETZE = 200;

	string bezeichnung;
	bool belegung[REIHEN][PLAETZE];
};

