#include "util.h"

#include "Reservierung.h"
#include "Kunde.h"
#include "Spiel.h"
#include "System.h"


int main() 
{
	cout << "Hello World!\n";
  Kunde k("Baumi");

  k.berechneGesamtUmsatz();
  cout << "ende";
}