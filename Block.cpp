#include "Block.h"

bool Block::istFrei(int r, int p) {
	return !belegung[r][p];
}

bool Block::belegePlatz(int r, int p) {
	if (istFrei(r, p))
	{
		belegung[r][p] = true;
		return true;
	}
	else 
	{
		return false;
	}
}

bool Block::gibPlatzFrei(int r, int p) {
	if (!istFrei(r, p)) 
	{
		belegung[r][p] = false;
		return true;
	}
	else 
	{
		return false;
	}
}

string Block::getName() {
	return bezeichnung;
}

Block::Block(string name) {
	bezeichnung = name;
}
Block::Block() {}
Block::~Block() {}