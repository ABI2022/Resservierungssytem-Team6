#pragma once

#include "util.h"

class Block
{
private:
	const static int REIHEN = 50;
	const static int PLAETZE = 200;

	string bezeichnung;
	bool belegung[REIHEN][PLAETZE] = {false};

public:
	bool istFrei(int r, int p);
	bool belegePlatz(int r, int p);
	bool gibPlatzFrei(int r, int p);
	string getName();

	void empty();

	Block(string name);
	Block();
	~Block();

};
