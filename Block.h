#pragma once



class Block
{
private:
	const static int REIHEN = 50;
	const static int PLAETZE = 200;

	string bezeichnung;
	bool belegung[REIHEN][PLAETZE];

public:
	bool istFrei(int r, int p);
	void belegePlatz(int r, int p);
	void gibPlatzFrei(int r, int p);

	Block(string name);
	Block();
	~Block();

};

