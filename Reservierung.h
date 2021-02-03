#pragma once

#include "util.h"

class Spiel;
class Kunde;

class Reservierung {
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

